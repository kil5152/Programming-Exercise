Write a function to take a phrase and return it's morse code equivalent, using the minus sign "-" for dash and period "." for dot.  For the sake of time, your function only needs to support letters a - e and space.

MORSE CODE
-----------
A: .-
B: -...
C: -.-.
D: -..
E: .
[ ]: /

TEST CASE
---------
Input:  "bad dad"
Expected Output:  "-... .- -.. / -.. .- -.."


#include <iostream>

using namespace std;

void morse_code(char input[]);

int main()
{
    const int SIZE = 20;        // input size
    char input[SIZE];           // user's input
    
    cout << "Prompt the input: ";
    cin.getline(input, SIZE);
    
    morse_code(input);
    
    return 0;
    
}

void morse_code(char input[])
{
    const char letter[7] = {'A', 'B', 'C', 'D', 'E', ' '};
    const char code[7][5]= {".-", "-...", "-.-", "-..", ".", "/" };
    int i = 0;
    int j = 0;
    
    while(input[i] != '\0')
    {
        j = 0;
        while(toupper(input[i]) != letter[j])
        {
            j++;
        }
        
        cout << code[j] << " ";
        i++;
    }
    
    cout << endl;
}

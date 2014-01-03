// Determine whether an integer is a palindrome. 

// e.g. 1423443
// reverse: 3
// num: 142344
// reverse: 34
// num: 14234
// reverse: 344
// num: 1423
// reverse: 3443
// num: 142
// reverse: 34432
// num: 14
// reverse: 344324
// num: 1
// reverse: 3443241
// num: 0



int reverse(int num)
{
	int reverse = 0;

	while(num != 0 ) {
		reverse = reverse * 10 + num % 10;
		num =  num / 10;

		// std::cout << "reverse: " << reverse << std::endl;
		// std::cout << "num: " << num << std::endl;
	}
	
	return reverse;
}


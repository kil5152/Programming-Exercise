// Determine whether an integer is a palindrome. 

int reverse(int num)
{
	int reverse = 0;

	while(num != 0 ) {
		reverse = reverse * 10 + num % 10;
		num =  num / 10;

		std::cout << "reverse: " << reverse << std::endl;
		std::cout << "num: " << num << std::endl;
	}
	
	return reverse;
}

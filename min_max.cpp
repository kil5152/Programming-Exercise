// Find the max and min of two numbers without using comparative operators

#include <iostream>

int Max(int a, int b);
int Min(int a, int b);

int main()
{
	int max = 0;
	int min = 0;

	max = Max(5,2);
	min = Min(5,2);

	std::cout << "Min: " << min << std::endl;
	std::cout << "Max: " <<  max << std::endl;

	return 0;
}

int Min(int a, int b)
{
	int min = 0;

	min=((a+b) - abs(a-b))/2;

	return min;
}

int Max(int a, int b)
{
	int max = 0;

	max=((a+b) + abs(a-b))/2;

	return max;
}

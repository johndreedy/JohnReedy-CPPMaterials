#include <iostream>

int main()
{
	int x; // ints are whole numbers
	double y; // doubles (and floats) are fractional numbers

	int a, b; 
	// it's possible to initialise 2 or more variables in the same statement
	// however, apparently this is not recommended for readability purposes

	x = 20;
	y = 6.66;

	a = 10;
	b = 30;

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	// I have included print strings and defined the variables for testing purposes
	// but I will explore this more in lesson 1.4
}
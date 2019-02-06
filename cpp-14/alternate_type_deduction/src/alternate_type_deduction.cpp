//============================================================================
// Name        : alternate_type_deduction.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

auto mul(auto x, auto y)
{
	return x * y;
}

int main() {
	std::cout << mul(15, 3) << '\n';
	std::cout << mul(15.55, 3) << '\n';
	std::cout << mul('a', 'b') << '\n';

	return 0;
}

/*
 * Implement a program to check if alternate type deduction works
 * correctly with templates
 */


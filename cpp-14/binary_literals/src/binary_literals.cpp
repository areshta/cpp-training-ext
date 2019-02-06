//============================================================================
// Name        : binary_literals.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bitset>

int main()
{
	for (int i = -0b0111; i < 0B0111; i += 0b01)
	{
		std::cout << std::hex << "0x" << i << '\n';
	}

	return 0;
}

/*
 * Write a program to continuously read a binary number from standard input
 * and to output it in decimal form
*/

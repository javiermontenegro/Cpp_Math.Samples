/*********************************************************************
* Filename:   Cpp_Decimal.To.Binary.cpp
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of how to convert decimal to binary in C++
*********************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int number;
	cout << "Enter a number:";
	cin >> number;
	int remainder, binary = 0, var = 1;

	do {
		remainder = number % 2; 
		number = number / 2; 
		binary = binary + (remainder*var); 
		var = var * 10;

	} while (number>0);

	cout << "The binary is :";
	cout << binary;
	cout << endl;
	return 0;
}//End main

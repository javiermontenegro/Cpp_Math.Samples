/*********************************************************************
* Filename:   Cpp_Decimal.To.Hexadecimal.cpp
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of how to convert decimal to hexadecimal in C++
*********************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int number = 0; 
	int i = 0;

	int hexArray[8];       
	char HexValues[] = "0123456789ABCDEF";

	cout << "Enter a number:"; 
	cin >> number;					 

	while (number > 15){        
		hexArray[i++] = number % 16;        
		number /= 16;
	}//End while
	hexArray[i] = number;        
	
	cout << "The binary is :";
	while (i >= 0){
		cout<<HexValues[hexArray[i--]];
	}//End while
	
	cout << endl;
	return 0;
}//End main

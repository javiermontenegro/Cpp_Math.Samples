/*********************************************************************
* Filename:   Cpp_Power.Huge.Number.cpp
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of how to power huge number in C++
*********************************************************************/

#include <iostream>
using namespace std;

#define MAX 100000

int multiply(int x, int res[], int res_size);
void power(int x, int n);

int multiply(int x, int res[], int res_size) 
{

	int carry = 0;

	for (int i = 0; i < res_size; i++) {
		int prod = res[i] * x + carry;

		res[i] = prod % 10;
        carry = prod / 10;
	}//End for

	while (carry) {
		res[res_size] = carry % 10;
		carry = carry / 10;
		res_size++;
	}//End while

	return res_size;
}//End multiply

void power(int x, int n)
{
	if(n == 0 ){
		cout<<"1";
		return;
	}//End if

	int res[MAX];
	int res_size = 0;
	int temp = x;

	while (temp != 0) {
		res[res_size++] = temp % 10;
		temp = temp / 10;
	}//End while

	for (int i = 2; i <= n; i++)
		res_size = multiply(x, res, res_size);

	cout << "Power " << x << "^" << n << " is :";
	for (int i = res_size - 1; i >= 0; i--)
		cout << res[i];
	cout << endl;
}//End power

int main(int argc, char **argv) 
{
    int exponent, base;
	
	cout << "Enter base:";
	cin >> base;
	
	cout << "Enter exponent:";
	cin >> exponent;

	power(base, exponent);
	return 0;
}//End main

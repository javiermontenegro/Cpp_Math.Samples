/*********************************************************************
* Filename:   Cpp_Fibonacci.Number.cpp
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of fibonacci algorithm in C++
*********************************************************************/

#include <iostream>
#include<cstdio>
using namespace std;

const long long MAX = 93;
long long f[MAX] = {0};
long long fn(long long n); 

long long fn(long long n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
 
    if (f[n])
        return f[n];
 
    long long k = (n%2!=0)? (n+1)/2 : n/2;
 
    f[n] = (n%2!=0)? (fn(k)*fn(k) + fn(k-1)*fn(k-1))
           : (2*fn(k-1) + fn(k))*fn(k);
    return f[n];
}//End fn


int main(int argc, char **argv)
{
    int number;
    cout << "Enter a number:";
    cin >> number;

	cout << "The fibonacci number is :" << fn(number) << endl;		
	return 0;
}//End main


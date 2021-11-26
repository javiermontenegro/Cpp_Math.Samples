/*********************************************************************
* Filename:   Cpp_Decimal.To.Roman.Numeral.cpp
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of how to convert decimal to 
              roman numeral in C++
*********************************************************************/

#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string fill(char c, int n);
string tolowerRoman(int n);
string toupperRoman(int n);

string fill(char c, int n)
{
    string s = "";
    while( n-- ) s += c;
    return s;
}//End fill

string tolowerRoman(int n)
{
    if( n < 4 ) return fill( 'i', n );
    if( n < 6 ) return fill( 'i', 5 - n ) + "v";
    if( n < 9 ) return string( "v" ) + fill( 'i', n - 5 );
    if( n < 11 ) return fill( 'i', 10 - n ) + "x";
    if( n < 40 ) return fill( 'x', n / 10 ) + tolowerRoman( n % 10 );
    if( n < 60 ) return fill( 'x', 5 - n / 10 ) + 'l' + tolowerRoman( n % 10 );
    if( n < 90 ) return string( "l" ) + fill( 'x', n / 10 - 5 ) + tolowerRoman( n % 10 );
    if( n < 110 ) return fill( 'x', 10 - n / 10 ) + "c" + tolowerRoman( n % 10 );
    if( n < 400 ) return fill( 'c', n / 100 ) + tolowerRoman( n % 100 );
    if( n < 600 ) return fill( 'c', 5 - n / 100 ) + 'd' + tolowerRoman( n % 100 );
    if( n < 900 ) return string( "d" ) + fill( 'c', n / 100 - 5 ) + tolowerRoman( n % 100 );
    if( n < 1100 ) return fill( 'c', 10 - n / 100 ) + "m" + tolowerRoman( n % 100 );
    if( n < 4000 ) return fill( 'm', n / 1000 ) + tolowerRoman( n % 1000 );
    return "?";
}//End tolowerRoman

string toupperRoman(int n)
{
    if( n < 4 ) return fill( 'I', n );
    if( n < 6 ) return fill( 'I', 5 - n ) + "V";
    if( n < 9 ) return string( "V" ) + fill( 'I', n - 5 );
    if( n < 11 ) return fill( 'I', 10 - n ) + "X";
    if( n < 40 ) return fill( 'X', n / 10 ) + toupperRoman( n % 10 );
    if( n < 60 ) return fill( 'X', 5 - n / 10 ) + 'L' + toupperRoman( n % 10 );
    if( n < 90 ) return string( "L" ) + fill( 'X', n / 10 - 5 ) + toupperRoman( n % 10 );
    if( n < 110 ) return fill( 'X', 10 - n / 10 ) + "C" + toupperRoman( n % 10 );
    if( n < 400 ) return fill( 'C', n / 100 ) + toupperRoman( n % 100 );
    if( n < 600 ) return fill( 'C', 5 - n / 100 ) + 'D' + toupperRoman( n % 100 );
    if( n < 900 ) return string( "D" ) + fill( 'C', n / 100 - 5 ) + toupperRoman( n % 100 );
    if( n < 1100 ) return fill( 'C', 10 - n / 100 ) + "M" + toupperRoman( n % 100 );
    if( n < 4000 ) return fill( 'M', n / 1000 ) + toupperRoman( n % 1000 );
    return "?";
}//End toupperRoman

int main(int argc, char **argv)
{
    int number;
    cout << "Enter a number between 0 up to 4000:";
    cin >> number;
    cout << "The upper roman numerals is: " << toupperRoman(number)  << endl;
    cout << "The lower roman numerals is: " << tolowerRoman(number) << endl;
    return 0;
}//End main

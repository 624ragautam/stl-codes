#include<iostream>
#include<string>
using namespace std;
/*
Implicit type conversions
bool -> char -> short int -> int -> 

unsigned int -> long -> unsigned -> 

long long -> float -> double -> long double
*/

int main()
{
    int i_val = 20;
    // Declaring float
    float f_val = 30.50;
    // Conversion of int into string using
    // to_string()
    string stri = to_string(i_val);
    // Conversion of float into string using
    // to_string()
    string strf = to_string(f_val);
    // Displaying the converted strings
    cout << "The integer in string is : ";
    cout << stri << endl;
    cout << "The float in string is : ";
    cout << strf << endl;
}
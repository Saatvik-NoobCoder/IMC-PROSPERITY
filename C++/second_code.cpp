#include<iostream>
using namespace std;
int main(){
    //getting into the cin object

    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout<< "Your age is " << age<< "\n";



return 0;

}








// Operators in C++
// Arithematic Operators:
// Absolutely same as in Python.

// Relational Operators:
// <, >, <=, >=, ==, !=, same as in Python.

// Logical Operators:
// &&, ||, !, &&= And of Python, || = Or of Python, != Not of Python.
// Assignment Operators:
// =, +=, -=, *=, /=, %=,...till here same as python -> (&=, |=, ^=, <<=, >>=) some new ones.
// Increment/Decrement Operators(unary):
// ++, --
// difference between a++ and ++a
// example:
// {int a = 5;
// int b = a++; -> pehle b mein a ki value assign hogi phir a update hoga(update means incremented by 1, in case of ++).)
// cout << a << "\n";
// cout << b << "\n";
// Output:
// a = 6
// b = 5}
// {int a = 5;
// int b = ++a; -> pehle a ki value update hogi phir b mein store hogi 
// cout << a << "\n";
// cout << b << "\n";
// Output:
// a = 6
// b = 6}
// -- bhi same hai, difference sirf increment ki jagah decrement hai.
// a++ -> kaam phir update
// ++a -> update phir kaam

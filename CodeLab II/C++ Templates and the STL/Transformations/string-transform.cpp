#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
#include "title-case.h"
using namespace std;

int main()
{
    string s1 = "this is a string";
    cout << s1 << endl;

    string s2(s1.size(), '.');
    cout << s2 << endl;
    //transform function takes a fourth argument as its transforming operator 
    //scope resolution operator distinguishes between the function and a colon macro
    /*
    scope resolution operator "::" meaning - used to define a function outside a class or use a global variable 
    but also a local variable with the same name
    */
    //colon macro meaning - identifiers that represent statements or expressions are called macros
    
    //transform(s1.begin(), s1.end(), s2.begin(), ::toupper);

    //can call the class and set it to "t" then in the fourth argument, I can pass "t"
    title_case t;
    //this will print starting of every letter uppercase
    transform(s1.begin(), s1.end(), s2.begin(), t);

    cout << s2 << endl;

    return 0;
}

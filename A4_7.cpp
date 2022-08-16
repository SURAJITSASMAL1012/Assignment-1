//Assignment 4:Program 7//
/*Write a C++ program to create a class string, which stores string with constructor,
 displays the string and joins two strings with join user defined function taking two arguments of string object.*/
 
#include <iostream>
#include <string.h>
using namespace std;
class STRING
{
private:
    string s1;
    string s2;

public:
    STRING(){};
    STRING(string, string);
    void display();
    void concat();
};

STRING::STRING(string p, string q)
{
    s1 = p;
    s2 = q;
}
void STRING::display()
{
    cout << "The first string is: " << s1 << endl;
    cout << "The second string is: " << s2 << endl;
    cout << endl;
}
void STRING::concat()
{
    cout << "The string after concatenation is: " << s1+s2 << endl;
   
}
int main()
{
    string k, l;
    cout << "Enter string-1: ";
    cin >> k;
    cout << "Enter string-2: ";
    cin >> l;
    STRING z(k, l);
    z.display();
    z.concat();

    return 0;
}
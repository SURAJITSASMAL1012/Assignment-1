//Assignment 4: program 8//
/*Write a C++ program to demonstrate
(A) Copy Constructor (B) Parameterized Constructor (C) Virtual destructor*/

#include <iostream>
using namespace std;

class Base
{
public:
    Base(){
        cout << "Base class constructor is invoked\n";
    }
    virtual ~Base(){
        cout << "\nBase class Destructor";
    }
    

};
class child : public Base
{
public:
    child(){
        cout << "\nDerived class constructor is invoked";
    }
    ~child(){
        cout << "\nDerived class Destructor\n";
    }
};
int main()
{
    Base *ptr = new child;
    
    delete ptr;

    return 0;
}
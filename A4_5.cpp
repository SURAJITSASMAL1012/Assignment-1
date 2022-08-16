//Assignment 4: Program 5//
/*Write a C++ program to create a class complex having two integers real and imaginary. 
Create a three constructors function taking no argument, one argument and two arguments for three constructors.
 Show () and sum() functions are member functions, displaying and finding the addition of two objects respectively.*/
 
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;
public:
    Complex();
    Complex(int);
    Complex(int,int);
    void Sum(Complex,Complex);
    void Show();
};
Complex::Complex()
{
    real=0;
    imaginary=0;
}
Complex::Complex(int a)
{
    real=a;
    imaginary=0;
}
Complex::Complex(int a, int b)
{
    real=a;
    imaginary=b;
}
void Complex::Sum(Complex o1, Complex o2){
    real=o1.real+o2.real;
    imaginary=o1.imaginary+o2.imaginary;
    cout<<"The sum of the complex numbers is: "<<real<<" + "<<imaginary<<"i"<<endl;
}
void Complex::Show(){
    cout<<"Your complex number is: "<<real<<" + "<<imaginary<<"i"<<endl;
    cout<<endl;
}
int main()
{
    Complex s;
    Complex c(5,6);
    Complex d(7);
    c.Show();
    d.Show();
    s.Sum(c,d);
    return 0;
}
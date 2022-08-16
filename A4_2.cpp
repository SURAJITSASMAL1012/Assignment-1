// Assignment 4: Program 2//
/*Write a C++ program to calculate the area and perimeter of a triangle by creating a class named 'Triangle'
 with separate member functions for (i) taking input from user, (ii) Calculate the area, (iii) Calculate the perimeter, (iv) printing of data.
 Two functions must be defined inside the class and two functions must be defined outside the class.*/

#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
private:
    float a, b, c, s, ar;

public:
    void getData()
    {
        cout << "Enter Length of all Three Sides: ";
        cin >> a >> b >> c;
    }
    float areaOfTriagle();
    float perOfTriangle();
    void printData()
    {
        cout << "Three sides of the Triangle:" << a << " " << b << " " << c << endl;
        cout << "area of the Triangle"
             << " " << ar << endl;
        cout << "Primeter of the triangle"
             << " " << a + b + c << endl;
    }
};

float Triangle::areaOfTriagle()
{
    s = (a + b + c) / 2;
    ar = sqrt(s * (s - a) * (s - b) * (s - c));
    return ar; 
   
}
float Triangle::perOfTriangle()
{
    return (a + b + c);
}

int main()
{
    Triangle c;
    
    c.getData();
    c.areaOfTriagle();
    c.perOfTriangle();
    c.printData();
    cout << endl;
    
    return 0;
}
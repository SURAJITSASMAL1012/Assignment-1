
//Assignment 4: Program 1
/*Write a C++ Program to calculate area of a circle to demonstrate the access modifier 
(A) public (B) private (C) protected.#include <iostream>*/ 

#include<iostream>
using namespace std;

class Circle1
{
private:
    float radius1;

public:
    void set_radius1(float p)
    {
        radius1 = p;
    }
    void calculate_area1()
    {
        float area1;
        area1 = 3.14 * radius1 * radius1;
        cout << "The area of circle(for private): " << area1 << endl;
    }
};
class Circle2
{
protected:
    float radius2;

public:
    void set_radius2(float a)
    {
        radius2 = a;
    }
    void calculate_area2()
    {
        float area2;
        area2 = 3.14 * radius2 * radius2;
        cout << "The area of circle(for protected): " << area2 << endl;
    }
};
class Circle3
{
public:
    float radius3;
    void set_radius3(float q)
    {
        radius3 = q;
    }
    void calculate_area3()
    {
        float area3;
        area3 = 3.14 * radius3 * radius3;

        cout << "The area of circle(for public): " << area3 << endl;
    }
};

int main()
{
    Circle1 c;
    Circle2 d;
    Circle3 e;
    int k, l, m;
    cout << "Enter the radius(private) for first circle: ";
    cin >> k;
    cout << "Enter the radius(protected) for second circle: ";
    cin >> l;
    cout << "Enter the radius(public) for third circle: ";
    cin >> m;
    cout << endl;
    c.set_radius1(k);
    d.set_radius2(l);
    e.set_radius3(m);
    c.calculate_area1();
    d.calculate_area2();
    e.calculate_area3();
    return 0;
}

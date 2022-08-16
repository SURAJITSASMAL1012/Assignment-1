//Assignment 4: Program 6//
/*Write a C++ Program using constructor and destructor for checking if the given year is leap year or not.*/

#include <iostream>
using namespace std;
class Leap_Year
{
private:
    int yr;

public:
    Leap_Year(){};
    Leap_Year(int);
    ~Leap_Year();
};
Leap_Year::Leap_Year(int a)
{
    yr = a;
}
Leap_Year::~Leap_Year()
{
    if ((yr % 4 == 0) && (yr % 100 != 0))
        cout << "\nIt is a Leap Year";
    else if (yr % 400 == 0)
        cout << "\nIt is a Leap Year";
    else
        cout << "\nIt is not a Leap Year";
}
int main()
{
    int y;
    cout << "Enter the Year: ";
    cin >> y;

    Leap_Year l(y);

    return 0;
}
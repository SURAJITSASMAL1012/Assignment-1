// Assignment 4: Program 9//
// Write a C++ program to find Square of a Number using inline function.//

#include <iostream>
using namespace std;
inline int sqr(int x)
{
    return x * x;
}
int main()
{
    int x, n;
    cout << "Enter how many times you want to call the function:";
    cin >> n;
    cout << "Enter the No: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cout << "The square of the number : " << x << " is" << sqr(x) << endl;
    }

    return 0;
}
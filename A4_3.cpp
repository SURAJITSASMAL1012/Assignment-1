//Assignment 4: Program 3//

/*Write a C++ program to create a class ‘Number_List’, which has separate member functions to create an integer array at run time, 
to sort given Integer and to find the minimum and maximum of the array.*/

#include <iostream>
#define MAX 1000
using namespace std;

class Number_List
{
private:
    int a[MAX];
    int size_of_array;

public:
    void Create_array();
    void Sort_array();
    void Max_Min_Array();
};
void Number_List::Create_array()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    size_of_array = n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element- " << i << ": ";
        cin >> a[i];
    }
}
void Number_List::Sort_array()
{
    for (int i = 0; i < size_of_array; i++)
    {
        for (int j = i + 1; j < size_of_array; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "The sorted array is: " << endl;
    for (int i = 0; i < size_of_array; i++)
    {
        cout << a[i] << ", ";
    }

    cout << endl;
}
void Number_List::Max_Min_Array()
{
    int max, min;
    max = a[0];
    min = a[0];
    for (int i = 0; i < size_of_array; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "The maximum number is: " << max << endl;
    cout << "The minimum number is: " << min << endl;
}
int main()
{
    Number_List p;
    p.Create_array();
    cout << endl;
    p.Sort_array();
    cout << endl;
    p.Max_Min_Array();
    return 0;
}

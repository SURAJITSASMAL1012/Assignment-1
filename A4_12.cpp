
#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char str[20]; // member variable for string input
public:
    void input() // member function
    {
        cout << "Enter your string: ";
        cin.getline(str, 20);
    }
    void display() // member function for output
    {
        cout << "String: " << str << endl;
    }
    String operator+(String s) // overloading
    {
        String obj;
        strcat(str, s.str);
        strcpy(obj.str, str);
        return obj;
    }
    void strRev()
    {
        int n = strlen(str);
        
        for (int i = 0; i < (n / 2); i++)
        {
            swap(str[n - i - 1], str[i]);
        }
        cout << "Reverse of the string:";
        for (int i = 0; i < n; i++)
        {
            cout << str[i];
        }
    }
};
int main()
{
    String str1, str2, str3; // creating three object
    str1.input();
    str2.input();
    str3 = str1 + str2;
    str3.display(); // displaying
    str3.strRev();

    return 0;
}
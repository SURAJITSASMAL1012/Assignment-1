#include <iostream>
using namespace std;
class Number1
{
private:
    float num1, num2, num3;
public:
    void set_data()
    {
        cout << "Enter Number-1 : ";
        cin >> this->num1;
        cout << "Enter Number-2 : ";
        cin >> this->num2;
        cout << "Enter Number-3 : ";
        cin >> this->num3;
    }
    class Number2
    {
    public:
        void Greater_Num(Number1 n)
        {
            if (n.num1 > n.num2 && n.num1 > n.num3)
            {
                cout << endl
                     << "The Greatest number is: " << n.num1 << endl;
            }
            else if (n.num2 > n.num1 && n.num2 > n.num3)
            {
                cout << endl
                     << "The Greatest number is: " << n.num2 << endl;
            }
            else
                cout << endl
                     << "The Greatest number is: " << n.num3 << endl;
        }
    };
};
int main()
{
    Number1 a;
    Number1::Number2 b;
    a.set_data();
    b.Greater_Num(a);
    return 0;

}
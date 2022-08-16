#include <iostream>
using namespace std;
class Circle
{
private:
    float radius;
public:
    void set_data()
    {
        cout << "Enter Radius of Circle: ";
        cin >> this->radius;
    }
    class Circle_inner
    {
    public:
        void Circle_area(Circle s)
        {
            cout << endl
                 << "Area of the circle: " << (3.14 * s.radius * s.radius) << endl;
        }
    };
};
int main()
{
    Circle d;
    d.set_data();
    Circle::Circle_inner c;
    c.Circle_area(d);

    return 0;
}
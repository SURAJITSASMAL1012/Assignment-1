#include <iostream>
using namespace std;

float Volume(float);
float Volume(float, float);
float Volume(float, float, float);

int main()
{
    while (1)
    {
        int ch, p;
        cout << "Enter your choice: " << endl;
        cout << endl
             << "1. Volume of Cube" << endl
             << "2. Volume of Cuboid"
             << endl
             << "3. Volume of Cone" << endl
             << "4. Volume of Cylinder"
             << endl
             << "5. Volume of Sphere" << endl
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            float a;
            cout << "Enter the length of side: ";
            cin >> a;
            cout << endl;
            cout << "The volume of Cube is: " << Volume(a) << endl;
            break;
        case 2:
            float l, w, h;
            cout << "Enter the length of Cuboid: ";
            cin >> l;
            cout << "Enter the width of Cuboid: ";
            cin >> w;
            cout << "Enter the height of Cuboid: ";
            cin >> h;
            cout << endl;
            cout << "The volume of Cubeoid is: " << Volume(l, w, h) << endl;
            break;
        case 3:
            float r, h1;
            cout << "Enter the radius of Cone: ";
            cin >> r;
            cout << "Enter the height of Cone: ";
            cin >> h1;
            cout << endl;
            cout << "The volume of Cone is: " << Volume(r, h1) << endl;
            break;
        case 4:
            float r1, h2;
            cout << "Enter the radius of Cylinder: ";
            cin >> r1;
            cout << "Enter the height of Cylinder: ";
            cin >> h2;
            cout << endl;
            cout << "The volume of Cylnder is: " << ((float)3 * (Volume(r1, h1))) << endl;
            break;
        case 5:
            float r2;
            cout << "Enter the radius of Sphere: ";
            cin >> r2;
            cout << endl;
            cout << "The volume of Sphere is: " << (((float)4 / (float)3) * (float)3.14 * (Volume(r2))) << endl;
            break;
        default:
            cout << "Wrong Choice!" << endl;
            break;
        }
        cout << endl;
        cout << "Press 0 to Continue." << endl
             << "Press any key to Exit." << endl;
        cin >> p;
        if (p == 0)
        {
            continue;
        }
        else
            break;
    }
    return 0;
}
float Volume(float a)
{
    return (a * a * a);
}
float Volume(float l, float w, float h)
{
    return l * w * h;
}
float Volume(float r, float h)
{
    return (((float)1 / (float)3) * (float)3.14 * r * r * h);
}

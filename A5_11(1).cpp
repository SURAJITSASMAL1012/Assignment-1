#include <iostream>
#include <string>
using namespace std;
class Marks
{
private:
    int roll_no;
    string name;

public:
    float marks;
    void set_data(int a, string b)
    {
        roll_no = a;
        name = b;
    }
    void set_marks(float m)
    {
        marks = m;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Total Marks: " << marks << endl;
    }
};
class Physics : public Marks
{
public:
    float physics_marks;
    void set_physics(float c)
    {
        physics_marks = c;
    }
};
class Chemistry : public Marks
{
public:
    float chemistry_marks;
    void set_chemistry(float c)
    {
        chemistry_marks = c;
    }
};
class Mathematics : public Marks
{
public:
    float math_marks;
    void set_math(float c)
    {
        math_marks = c;
    }
};
int main()
{
    int n;
    string s;
    float m1, m2, m3;
    float sum = 0;
    cout << "Enter the number of Students: ";
    cin >> n;
    Marks m[n];
    Physics p[n];
    Chemistry q[n];
    Mathematics r[n];
    for (int i = 0; i < n; i++)
    {
        cout << "For Student- " << i + 1 << " : " << endl;
        cout << "Enter Name: ";
        fflush(stdin);
        getline(cin, s);
        cout << "Roll No.- " << i + 1 << endl;
        m[i].set_data(i + 1, s);
        cout << "Enter marks of physics: ";
        cin >> m1;
        p[i].set_physics(m1);
        cout << "Enter marks of Chemistry: ";
        cin >> m2;
        q[i].set_chemistry(m2);
        cout << "Enter marks of Mathematics: ";
        cin >> m3;
        r[i].set_math(m3);

        m[i].set_marks((m1 + m2 + m3));
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "For student- " << i + 1 << " : " << endl;
        m[i].print();
        cout<<"Marks in physics: "<<p[i].physics_marks<<endl;
        cout<<"Marks in chemistry: "<<q[i].chemistry_marks<<endl;
        cout<<"Marks in mathematics: "<<r[i].math_marks<<endl;
        sum += m[i].marks;
    }
    cout << endl
         << "The Average Marks of the Class is: " << sum / n << endl;
    return 0;
}
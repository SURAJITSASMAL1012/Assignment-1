#include <iostream>
#include <string>
using namespace std;
class Students
{
private:
    int roll_no;
    string name;
    float marks[3];

public:
    void set_data()
    {
        cout << "Enter Data: " << endl;
        cout << "Enter Roll No. of Student- : ";
        cin >> roll_no;
        fflush(stdin);
        cout << "Enter Name of Student- : ";
        getline(cin, name);
        cout << "Enter Marks of Student- : " << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Marks- " << j + 1 << " : ";
            cin >> marks[j];
        }
    }
 float average_marks()
{
    float a;
    a = (marks[0] + marks[1] + marks[2]) / (float)3;
    return a;
}
char Grade()
{
    float b;
    b = average_marks();
    if (b > 80)
    {
        return 'A';
    }
    else if (b > 70)
    {
        return 'B';
    }
    else if (b > 60)
    {
        return 'C';
    }
    else if (b > 50)
    {
        return 'D';
    }
    else if (b > 40)
    {
        return 'E';
    }
    return 'F';
}
void print_data()
{
    cout<<"The Name of Student: "<<name<<endl;
    cout<<"The Roll No. of Student: "<<roll_no<<endl;
    cout << "The Average marks is: " << average_marks() << endl;
    cout << "The Grade is: " << Grade() << endl;
}
}
;
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    Students new_students[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"For Student- "<<i+1<<" : "<<endl;
        new_students[i].set_data();
    }

    for (int i = 0; i < n; i++)
    {
        cout<<endl<<"For Student- "<<i+1<<" : "<<endl;
        new_students[i].print_data();
    }

    return 0;
}
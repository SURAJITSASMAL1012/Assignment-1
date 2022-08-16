#include <iostream>

using namespace std;

class Person

{

private:
    char name[20];

public:
    void get_per_data()

    {

        cout << "\nEnter the name: ";

        cin >> name;
    }

    void show_per_data()

    {
        cout << "\nThe name is: " << name;
    }
};

class Employee : virtual public Person
{
private:
    int emp_id;

public:
    void get_data()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
    }
    void show_data()
    {
        cout << "Emplyee ID: " << emp_id;
    }
};
class Student : virtual public Person
{
private:
    int roll_no;

public:
    void get_data()
    {
        cout << "\nEnter Roll No: ";
        cin >> roll_no;
    }
    void show_data()
    {
        cout << "\nRoll No: " << roll_no;
    }
};
class Manager : public Employee, public Student
{
private:
    unsigned int salary;

public:
    void get_data()
    {
        Employee::get_data(); /**calls the get_data() of Employee**/
        Student::get_data();
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void show_data()
    {
        Employee::show_data();
        Student::show_data();
        cout << "\nSalary: " << salary;
    }
};
int main()
{
    Manager m;
    cout << "Enter data for manager: ";
    m.get_per_data(); /**calls single copy of get_per_data()**/
    m.get_data();
    cout << "\nThe data on manager is:  ";
    m.show_per_data();
    m.show_data();
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    int age;
    Student()
    {
        cout<<"Base constructor invoked"<<endl;
    }
    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << "Name" << endl;
    }
    Student(string s, int a)
    {
        cout<<"Parameterised constructor invoked"<<endl;
        name = s;
        age = a;
    } // Parameterised constructor
    Student(Student &a)
    {
        cout << "copy constractor invoked" << endl;
        name = a.name;
        age = a.age;
    } // copy const
    void printinfo()
    {
        cout << "Name =" ;
        cout << name << endl;
        cout << "Age =" ;
        cout << age << endl;
    }
    virtual ~Student()
    {
        cout<<"Destructor Base invoked"<<endl;
        
    } 
};
class Stud : public Student
{
    public:
        Stud()
        {
            cout<<"Derived class constructor is invoked"<<endl;
        }
        ~Stud()
        {
            cout<<"Derived class destructor is invoked"<<endl;
        }
    

    

};
int main()
{
    Student a("surajit", 22);
    
    a.printinfo();

    Student c(a);
    c.printinfo();
    Student *ptr = new Stud;
    delete ptr;

    return 0;
}

#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int id;
    float salary;

    void printinfo()
    {
        if(salary>50000)
        { 
        cout<<"----------------------"<<endl;
        cout<<"Name=";
        cout<<name<<endl;
        cout<<"Id=";
        cout<<id<<endl;
        cout<<"Salary=";
        cout<<salary<<endl;
        }
    }
};

int main()
{
    Employee arr[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Name=";
        cin>>arr[i].name;
        cout<<"Id=";
        cin>>arr[i].id;
        cout<<"Salary=";
        cin>>arr[i].salary;
    }
    
    for(int i=0;i<3;i++)
    {
        arr[i].printinfo();
    }
    
    return 0;
    
}
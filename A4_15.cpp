#include<iostream>
using namespace std;
class complex
{
    float a,b;
    public:
        void get()
        {
            cout<<endl<<"Enter value for a=";
            cin>>a;
            cout<<endl<<"Enter value for b=";
            cin>>b;
        }
        void disp()
        {
            cout<<a<<" +"<<b<<"i";
           // cout<<endl<<b;
        }
    friend complex sum(complex,complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}
int main()
{
    complex x,y,z;
    x.get();
    cout<<"First Complex NUmber is:";
    x.disp();

    y.get();
    cout<<"Second Complex Number is:";
    y.disp();

    z=sum(x,y);
    cout<<endl<<"Sum Of the Complex Number:";
    z.disp();
    return 0;
}
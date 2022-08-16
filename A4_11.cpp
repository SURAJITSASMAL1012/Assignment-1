#include<iostream>
using namespace std;
void calculate(int,int,char);
void calculate(int,char);
int main()
{
    int a,b,m;
    char ch;
    cout<<"enter the number(>1) :";
    cin>>m;
    cout<<"enter a charector(r or p) :";
    cin>>ch;
    calculate(m,ch);
    cout<<"enter two numbers :";
    cin>>a>>b;
    cout<<"enter a charector(p or l) :";
    cin>>ch;
    calculate(a,b,ch);
}
void calculate(int m,char ch)
{
    int rev=0,rem;
    if(ch=='r')
    {
        while(m!=0)
    {
        rem=m%10;
        rev=rem+rev*10;
        m=m/10;
    }
    cout<<"reversed number is "<<rev<<endl;
    }
    if(ch=='p')
    {
        int i,flag=0;
        for(i=2;i<m;i++)
        {
            if(m%i==0)
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
            cout<<"the number is a prime number"<<endl;
        else
            cout<<"the number is not a prime number"<<endl;
    }
}
void calculate(int a,int b,char ch)
{
    int rev=0,rem,num;
    num=a;
    if(ch=='p')
    {
        while(a!=0)
    {
        rem=a%10;
        rev=rem+rev*10;
        a=a/10;
    }
   if(num==rev)
    cout<<"the integer is a palyndrome"<<endl;
    }
    if(ch=='l')
    {
        int i,pow=1;
        for(i=1;i<=b;i++)
        {
            pow=pow*a;
        }
        cout<<a<<" to the power "<<b<<" is "<<pow<<endl;
    }

}
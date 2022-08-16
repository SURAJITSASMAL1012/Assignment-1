#include<iostream>
using namespace std;
class Calculator
{
private:
    float num1;
    float num2;
public:
    void set_data(){
        cout<<"Enter number-1: ";
        cin>>this->num1;
        cout<<"Enter number-2: ";
        cin>>this->num2;
    }
   class Sum
   {
   public:
        void Sum_Num(Calculator x){
            cout<<"The sum is: "<<(x.num1+x.num2)<<endl;
        }
   };
   
   class Substract
   {
   public:
       void Substract_Num(Calculator x){
            cout<<"The substraction is: "<<(x.num1-x.num2)<<endl;
        }
   };

   class Multiply
   {
   public:
    void Multiply_Num(Calculator x){
            cout<<"The multiplication is: "<<(x.num1*x.num2)<<endl;
        }
   };
   
   class Division
   {
   public:
      void Division_Num(Calculator x){
            cout<<"The sum is: "<<(x.num1/x.num2)<<endl;
        }
   };
   
};
int main()
{
    while(1){
    Calculator c;
    int n,p;
    cout<<"Enter your choice: "<<endl<<endl;
    cout<<"1.Sum"<<endl<<"2.Substraction"<<endl<<"3.Multiply"<<endl<<"4.Division"<<endl<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        c.set_data();
        Calculator::Sum a;
        a.Sum_Num(c);
        break;
    case 2:
        c.set_data();
        Calculator::Substract b;
        b.Substract_Num(c);
        break;
    case 3:
        c.set_data();
        Calculator::Multiply d;
        d.Multiply_Num(c);
        break;
    case 4:
        c.set_data();
        Calculator::Division e;
        e.Division_Num(c);
        break;
    
    default:
        cout<<"Wrong Choice!"<<endl;
        break;
    }
    cout<<endl<<"Press 0 to Continue."<<endl<<"Press any key to Continue."<<endl;
    cin>>p;
    if (p==0)
    {
        continue;
    }
    else break;
}
    return 0;
}
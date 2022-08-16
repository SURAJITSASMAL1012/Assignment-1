#include<iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float breadth;
public:
   void set_data(){
       cout<<"Enter the length: ";
       cin>>length;
       cout<<"Enter the breadth: ";
       cin>>breadth;
   }
   void print_data(){
       
       if(length==breadth){
         cout<<"The length and breadth are equal."<<endl;
       }
       else 
        cout<<"Length and breadth not equal!"<<endl;
   }
};
int main()
{
    int n;
    cout<<"Enter the number of Rectangle: ";
    cin>>n;
    Rectangle x[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"For Rectangle- "<<i+1<<" : "<<endl;
        x[i].set_data();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<endl<<"For Rectangle- "<<i+1<<" : "<<endl;
        x[i].print_data();
    }
    
    return 0;
}


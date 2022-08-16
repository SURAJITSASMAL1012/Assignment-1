//Assignment 4: Program 10//
/*Write a menu-driven C++ program to calculate volume of cube, cuboid, cone, cylinder, and 
sphere using function overloading. For an incorrect choice, proper error message should be displayed.*/

#include<iostream>
using namespace std;
#include<conio.h>
class Volume
{
 float V;
public:
 void cube()
 {
  float a;
  cout<<"Enter value of side"<<endl;
  cin>>a;
  V=a*a*a;
 }
 void cuboid()
 {
  float l,b,h;
  cout<<"Enter length,width & hight of cuboid"<<endl;
  cin>>l>>b>>h;
  V=l*b*h;
 }
 void cylender()
 {
  float r,h;
  cout<<"Enter radius & hight of cylender"<<endl;
  cin>>r>>h;
  V=3.14*r*r*h;
 }
 void sphere()
 {
  float r;
  cout<<"Enter radius of sphere"<<endl;
  cin>>r;
  V=(4*3.14*r*r*r)/3;
 }
 void cone()
 {
  float r,h;
  cout<<"Enter radius & hight of cone"<<endl;
  cin>>r>>h;
  V=(3.14*r*r*h)/3;
 }
 void display()
 {
  cout<<"Volume is = "<<V<<endl;
 }
};
int main()
{
 while(1){
  int ch,q;
  Volume ob;
  cout<<"Select the shape for calculate volume"<<endl<<endl;
  cout<<"Press 1 for select CUBE"<<endl;
  cout<<"Press 2 for select CUBOID"<<endl;
  cout<<"Press 3 for select CYLINDER"<<endl;
  cout<<"Press 4 for select SPHERE"<<endl;
  cout<<"Press 5 for select CONE"<<endl<<endl;
  cin>>ch;
  cout<<endl;
   switch(ch)
     {
         case 1: ob.cube();break;
         case 2: ob.cuboid();break;
         case 3: ob.cylender();break;
         case 4: ob.sphere();break;
         case 5: ob.cone();break;
         default: cout<<"Wrong input";
          
     }
  if(ch>=1 && ch<=5)
   ob.display();
  cout<<"press any key to countinue... / press 0 to EXIT"<<endl<<endl;
   q=getch();
  
  if(q==48){
   return 0;
  }
  
 }   
}

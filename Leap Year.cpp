#include<iostream>
using namespace std;
class LeapYear
{
    private:
        int yr;
    public:
        int getData();
        void checkLeapYear(int);
};
int LeapYear::getData()
{
    cout<<"Enter the Year: ";
    cin>>yr;
    return yr;
}
void LeapYear::checkLeapYear(int yr)
{
    if((yr%4==0) && (yr%100!=0))
        cout<<"\nIt is a Leap Year";
    else if(yr%400==0)
        cout<<"\nIt is a Leap Year";
    else
        cout<<"\nIt is not a Leap Year";
}
int main()
{
    LeapYear c;
    int y;
    y = c.getData();
    c.checkLeapYear(y);
    cout<<endl;
    return 0;
}
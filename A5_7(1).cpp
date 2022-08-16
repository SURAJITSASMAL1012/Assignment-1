#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i=0,chr=0,ln=0,wr=0;
    char ch,str[1000];
    ifstream in("sample.txt");
    if(!in)
    {
        cout<<"error";
    }
    while(in.get(ch))
    {
        chr++;
        if(ch==' ')
        wr++;
        else if(ch=='\n'){
        ln++;
        wr++;}
    }
    cout<<"number of charectors "<<chr<<endl;
    cout<<"number of words "<<wr+1<<endl;
    cout<<"number of lines "<<ln+1<<endl;
    in.close();
    return 0;
}
# include<iostream>
using namespace std;
class Pattern
{
	public:
	int revPyramid()
	{
		int i,j,k,rows;
		cout<<"enter no of rows:";
		cin>>rows;
        cout<<endl; 
		for(i=rows;i>=1;i--)
        {
            
            for(k=1;k<(rows-i);k++)
            {
                cout<<" ";
            }
            for(j=1;j<=i;j++)
            {
                cout<<"* ";
            }cout<<endl;
            
        }
	}
};
int main()
{
	Pattern myobj;
	myobj. revPyramid();
}




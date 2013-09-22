#include<iostream>
using namespace std;

int x,y;
long power(int x,int y);

int main()
{
	cout<<"输入x:";
	cin>>x;
	cout<<"输入y:";
	cin>>y;
	cout<<power(x,y)<<endl;
}

long power(int x,int y)
{
	long c=1;
	for(int i=0;i<y;i++)
	{
		c=x*c;
	}
	return c;
}
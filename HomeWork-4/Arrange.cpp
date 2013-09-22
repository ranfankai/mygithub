#include<iostream>
using namespace std;

int m=0,n=0;

long arr(int m,int n);
long fun(int x);

int main()
{
	cout<<"ÇëÊäÈën:";
	cin>>n;
	cout<<"ÇëÊäÈëm:";
	cin>>m;
	cout<<arr(m,n)<<endl;
}

long arr(int m,int n)
{
	if(n>m)
	{
		long c=0;
		c=fun(n)/fun(n-m)/fun(m);
		return c;
	}
	else cout<<"error: n should be bigger than m";
}

long fun(int x)
{
	long b=1;
	if(x>=0)
	{
		for(int i=1;i<=x;i++)
		{	
			b=b*i;
		}
	return b;
	}
	else cout<<"error: x should be a positive number";
}




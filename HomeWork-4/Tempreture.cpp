#include<iostream>
using namespace std;

void ST(float f);
float c,f;

int main()
{
	ST(f);
}

void ST(float f)
{
	cout<<"输入华氏温度：";
	cin>>f;
	c=(f-32)*5/9;
	cout<<"摄氏温度为："<<c<<endl;
}

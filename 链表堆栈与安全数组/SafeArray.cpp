#include<iostream>
#define N 10

//安全数组定义
class SafeA
{
private:
	int * arr;
	int size;
public:
	SafeA(int n);
	void setArray(int i,int e);
	void getArray(int i);
};

//构造函数，初始化数组
SafeA::SafeA(int n)
{
	int i;
	arr=new int[n];
	size=n;
	for(i=0;i<size;i++)arr[i]=0;
}

//给第i位赋值e
void SafeA::setArray(int i,int e)
{
	if(i>=0&&i<size)arr[i]=e;
	else printf(" set error：i is too big or too small");
}

//显示第i位元素
void SafeA::getArray(int i)
{
	if(i>=0&&i<size)printf("第%d号元素：%d\n",i,arr[i]);
	else printf("get error：i is too big or too small");
}

int main()
{
	int n;
	scanf("%d",&n);
	SafeA s(N);
	for(int i=0;i<N;i++)s.setArray(i,3*i);
	s.getArray(n);

}
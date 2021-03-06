#include<iostream>
using namespace std;
class IOStack
{
public:
	int top;
	int data[20];

	void begin();
	void List();
	void push();
	void pop();
	int isFull();
	int isEmpty();
};

void IOStack::begin()
	{
		int i=1;
		int n;
		cout<<"1:查看";
		cout<<"2：入桟";
		cout<<"3：出栈";
		cout<<"4：退出";
		while(i)
		{
			cin>>n;
			switch(n)
			{
				case 1:List();break;
				case 2:push();break;
				case 3:pop();break;
				case 4:i=0;break;
				default:cout<<"input error";
			}
		}
	}

void IOStack::pop()
	{
		int i;
		if(isEmpty())
		{
			cout<<"underflow";
		}
		else
		{
			i=data[top];
			top--;
			cout<<i<<"out of stack";
			data[top]=NULL;
		}
	}

void IOStack::push()
	{
		int i;
		cin>>i;
		if(isFull())
		{
			cout<<"overflow";
		}
		else 
		{
			top++;
			data[top]=i;
			cout<<i<<"push in the stack";
		}
	}

void IOStack::List()
	{
		if(isEmpty())
		{
			cout<<"underflow";
		}
		else
		{
			for(int i=top;i>=0;i--)
				cout<<"第"<<i<<"号元素\t"<<data[i];
		}
	}

int IOStack::isFull()
	{
		return top==19?1:0;
	}

int  IOStack::isEmpty()
	{
		return top==-1?1:0;
	}	

int main()
{
	IOStack sta;
	sta.top=-1;
	sta.begin();
}


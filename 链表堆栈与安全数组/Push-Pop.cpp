#include<iostream>

//节点类型定义
typedef struct LinkNode
	{
		int data;
		struct LinkNode * next;
	}LinkNode,*Link;

//Stack类定义
class Stack
{
public:
	Stack();
	void Push(int n);
	void Pop();
	bool isEmpty();
	void ShowStack();
private:
	int COUNT;
	Link L;
};

//构造函数，初始化对象
Stack::Stack()
{
	COUNT==0;
	L=(Link)malloc(sizeof(LinkNode));
	L->next=NULL;
}

//向栈中压入数据n
void Stack::Push(int n)
{
	Link p =(Link)malloc(sizeof(LinkNode));
	p->next=L->next;
	L->next=p;
	p->data=n;
	COUNT++;
}

//弹出栈尾元素
void Stack::Pop()
{
	Link p;
	p=L->next;
	if(!isEmpty())
	{
		L->next=p->next;
		delete p;
		COUNT--;
	}
}

//显示栈中元素
void Stack::ShowStack()
{
	Link p;
	p=L->next;
	while(p!=NULL){printf("%d\t",p->data);p=p->next;}
}

//判断栈是否为空
bool Stack::isEmpty()
{
	return L->next==NULL?1:0;
}

int main(int argc,char * argv[])
{
	Stack s;
	for(int i=0;i<10;i++)
		s.Push(i);
	s.ShowStack();
	s.Pop();
	s.ShowStack();
}

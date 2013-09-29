#include<string>
#include<iostream>
using namespace std;

struct student
{
	 string name;
	 string num;
	 float score;
}stu[200];

static int COUNT=0;

int Find(string num);
void Add();
void Delete(student stu[]);
void List();
void Input(student &stu1);
void Stumenu();

int main()
{
	Stumenu();
}
//主菜单
void  Stumenu()
{
	int n,i=1;
	
	while(i)
	{
		cin>>n;
		switch(n)
		{
			case 1:List();break;
			case 2:Add();break;
			case 3:Delete(stu);break;
			case 4:i=0;break;
			default:cout<<"input error";
		}
	}
}
//查找比对
int Find(string num)
{
	int mark=-1;
	for(int i=0;i<COUNT;i++)
	{
		if(num==stu[i].num)
		{
			mark=i;
		}
	}
	return mark==-1?COUNT:mark;
}
//删除学生
void Delete(student stu[])
{
	student stu1,temp;
	Input(stu1);
	int i=Find(stu1.num);
	if(!(i==COUNT))
	{
		for(int j=i;j<COUNT;j++)
		{
			stu[j]=stu[j+1];
		}
		COUNT--;
		cout<<"successfully deleted"<<endl;
	}

	else cout<<"This student isn't in this class"<<endl;
}
void Input(student &stu1)
{
	cout<<"输入学生姓名";
	cin>>stu1.name;
	cout<<"输入学生学号";
	cin>>stu1.num;
	cout<<"输入学生分数";
	cin>>stu1.score;
}
//添加学生
void Add()
{
	student stu1;
	Input(stu1);
	int i=Find(stu1.num);
	if(i==COUNT)
	{
		stu[i].name=stu1.name;
		stu[i].num=stu1.num;
		stu[i].score=stu1.score;
		COUNT++;
		cout<<"successfully added"<<endl;
	}
	else cout<<"This student is already in this class"<<endl;
}
//查看所有学生
void List()
{
	for(int i=0;i<COUNT;i++)
	{
		cout<<stu[i].name<<"\t"<<stu[i].num<<"\t"<<stu[i].score<<endl;
	}
	cout<<"There are/is"<<"\t"<<COUNT<<"\t"<<"students in total"<<endl;
}
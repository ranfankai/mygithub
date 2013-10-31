#include<string>
#include<iostream>
using namespace std;
class Student
{
public:string name;
	 string num;
	 float score;
};
class StudentManage{
public:
	Student stu[200];
	static int COUNT;
int Find(string num);
void Add();
void Delete(Student stu[]);
void List();
void Input(Student &stu1);
void Stumenu();
};

int StudentManage::COUNT=0;
void  StudentManage::Stumenu()
{
	int n,i=1;
	cout<<"输入 1 查看全部学生"<<endl;
	cout<<"输入 2 添加学生"<<endl;
	cout<<"输入 3 删除学生"<<endl;
	cout<<"输入 4 退出程序"<<endl;
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

void StudentManage::List()
{
	cout<<"学生姓名\t"<<"学生学号\t"<<"学生成绩\t"<<endl;
	for(int i=0;i<COUNT;i++)
	{
		cout<<stu[i].name<<"\t"<<stu[i].num<<"\t"<<stu[i].score<<endl;
	}
}

void StudentManage::Input(Student &stu1)
{
	cout<<"输入学生姓名：";
	cin>>stu1.name;
	cout<<"输入学生学号：";
	cin>>stu1.num;
	cout<<"输入学生分数：";
	cin>>stu1.score;
}

int StudentManage::Find(string num)
{
	int mark=-1;
	for(int i=0;i<COUNT;i++)
	{
		if(num==stu[i].num)
			mark=i;
	}
	return mark==-1?COUNT:mark;
}

void StudentManage::Add()
{
	Student stu1;
	Input(stu1);
	int i=Find(stu1.num);
	if(i==COUNT)
	{
		stu[i].name=stu1.name;
		stu[i].num=stu1.num;
		stu[i].score=stu1.score;
		COUNT++;
	}

}

void StudentManage::Delete(Student stu[])
{
	Student stu1;
	cout<<"输入学生学号："<<endl;
	cin>>stu1.num;
	int i=Find(stu1.num);
	if(!(i==COUNT))
	{
		for(int j=i;j<COUNT;j++)
		{
			stu[j]=stu[j+1];
		}
		COUNT--;
	}
}

int main(int argc,char* argv[])
{
	StudentManage SM;
	SM.Stumenu();
}
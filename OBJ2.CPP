#include <conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<string.h>
class student
{
private:
	int roll;
       long phone;
	 char name[20];
	 char course[10];
	 char add[20];
public:
	student()
	{
	roll=-1;
	phone=-1;
	strcpy(name,"undefined");
	strcpy(course,"undefined");
       strcpy(add,"undefined");
	}
	student(int r,long p,char*n,char*c,char*a)
	{
	roll=r;
	phone=p;
	strcpy(name,n);
	strcpy(course,c);
	strcpy(add,a);
	}
	void display()
	{
	cout<<"the roll no is:"<<roll<<endl;
	cout<<"phone no is:"<<phone<<endl;
	cout<<"name of student is:"<<name<<endl;
	cout<<"the course is:"<<course<<endl;
	cout<<"and the address is "<<add;
	}
	int getr()
	{
	return roll;
	}
	long getp()
	{
	 return phone;
	}
	char*getn()
	{
	return name;
	}
	char * geta()
	{
	return add;
	}
	char * getc()
	{
	return course;
	}
	void setp(int p)
	{
	phone=p;
	}
	void setr(int r)
	{
	roll=r;
	}
	void setn(char*n)
	{
	strcpy(name,n);
	}
	void setc(char* c)
	{
	strcpy(course,c);
	}
	void seta(char* a)
	{
	strcpy(add,a);
	}
}
main()
{
student ob[5];
clrscr();
for(int i=0;i<5;i++)
{
int r;
long p;
char n[50];
char ad[50];
char co[10];
cin>>r;
cin>>p;
cin>>n;
cin>>ad;
cin>>co;
ob[i]=student(r,p,n,co,ad);
ob[i].display();
}
getch();
}
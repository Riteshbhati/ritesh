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
	cout<<roll<<endl;
	cout<<phone<<endl;
	cout<<name<<endl;
	cout<<course<<endl;
	cout<<add;
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
ob[0].setp(12345);
ob[0].setr(421);
ob[0].setn("ritesh bhati");
ob[0].setc("bca");
ob[0].seta("ajmer");
ob[0].display();
ob[1].setp(12345);
ob[1].setr(421);
ob[1].setn("ritesh bhati");
ob[1].setc("bca");
ob[1].seta("ajmer");
ob[1].display();
ob[2].setp(12345);
ob[2].setr(421);
ob[2].setn("ritesh bhati");
ob[2].setc("bca");
ob[2].seta("ajmer");
ob[2].display();
ob[3].setp(12345);
ob[3].setr(421);
ob[3].setn("ritesh bhati");
ob[3].setc("bca");
ob[3].seta("ajmer");
ob[3].display();
ob[4].setp(12345);
ob[4].setr(421);
ob[4].setn("ritesh bhati");
ob[4].setc("bca");
ob[4].seta("ajmer");
ob[4].display();
getch();
}
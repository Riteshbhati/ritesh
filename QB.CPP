#include<conio.h>
#include<stdio.h>
main()
{
int p,b,sum=1;
cout<<"enter power";
cin>>p;
cout<<"enter base";
cin>>b;
for(int i=1;i<p;i++)
{
sum=sum*b;
}
cout<<sum;
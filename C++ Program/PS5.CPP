#include<iostream.h>
#include<conio.h>
//class ps
void main()

{
struct student
{
int m1,m2,m3;
};
typedef struct
{
char name[20];
int r;
struct student marks;
}
student1;
student t,a[10];
int i,j,n;

cout<<"enter the student no="<<endl;
cin>>n;
cout<<"student detailes is"<<endl;
for(i=0;i<n;i++)
{
cout<<"name=";
gets(a[i].name);
cout<<"r";
cin>>a[i].r;
cout<<"marks1";
cin>>a[i].m1;
cout<<"marks2";
cin>>a[i].m2;
cout<<"marks3";
cin>>a[i].m3;
}
for(j=0;j<n;j++)
{
cout<<"name="<<name[i];
cout<<"r"<<r[i];
cout<<"marks1"<<a[i].marks.m1;
cout<<"marks2"<<a[i].marks.m2;
cout<<"marks3"<<a[i].marks.m3;
getch();
}


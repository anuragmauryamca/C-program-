#include<iostream.h>
#include<conio.h>
void main()
{
int a=5,b=7;
clrscr();
void swap(int &a,int &b)  ;
cout<<"original valueis=";
cout<<"a="<<a<<"b="<<b;
swap(a,b);
cout<<"after swaping";
cout<<a<<b;
getch();
}
void swap(int &a,int &b)
{
int c;
c=a;
a=b;
b=c;
}

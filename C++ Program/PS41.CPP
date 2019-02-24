#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=10,b=13;
int swap(int &a,int &b);
cout<<"original value";
cout<<a<<b;
swap(10,8);
cout<<a<<endl<<b;
getch();
}
int swap(int &a,int &b)
{
int c;
c=a;
a=b;
b=c;
cout<<"lorge value";
if(a>b)
return a;
else
return b;
}

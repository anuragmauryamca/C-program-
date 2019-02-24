#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int *p;
p=new int;
cout<<"enter the value";
cin>>*p;
*p=*p-1;

cout<<"new operatore value"<<*p;
delete p;
getch();
}


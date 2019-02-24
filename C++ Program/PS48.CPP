#include<iostream.h>
#include<conio.h>
class abc
{
public:
int a,b;
public:
abc()
{
a=2;
b=3;
}
void operator +=(int x)
{
a=x;
a=a+b;
cout<<a;
}
};
void main()
{
clrscr();
abc a;
getch();
}


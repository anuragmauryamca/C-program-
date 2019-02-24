#include<iostream.h>
#include<conio.h>
class two;
class one
{
int data1;
public:
void setvalue(int init)
{
init=data1;
}
friend int add_both(one a,two b);
};

class two
{
int data2;
public:
void setvalue(int init)
{
init=data2;
}
friend int add_both(one a,two b);
};
int add_both(one a,two b)
{
return int(a.data1+b.data2);
}
void main()
{
clrscr();
one a;
two b;
a.setvalue(10);
b.setvalue(12);
cout<<"sum two classes"<<add_both(a,b);
getch();
}

#include<iostream.h>
#include<conio.h>
class abc;
class xyz
{
int value1;

public:
void input(int a)
{
value1=a;
}
void put()
{
cout<<value1;
}
friend void swap(xyz &,abc &);
};
class abc
{
int value2;
public:
void input(int b)
{
value2=b;
}
void put()
{
cout<<value2;
}
friend void swap(xyz &,abc &);
};
void swap(xyz &x,abc &y)
{
int z;
z=x.value1;
x.value1=y.value2;
y.value2=z;
}
void main()
{
abc a1;
xyz a2;
a1.input(10);
a2.input(20);
cout<<"before swap";
a1.put();
a2.put();
swap(a1,a2);
cout<<"after swpaing";
a1.put();
a2.put();
getch();
}




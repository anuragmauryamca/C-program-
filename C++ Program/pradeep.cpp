#include<iostream.h>
#include<conio.h>
class abc
{
int x,y;
public:
abc()
{
x=0;
y=0;
}
abc(int a,int b)
{
x=a;
y=b;
}
void put()
{
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
}
abc operator /(abc a)
{
abc a1;
a1.x=x/a.x;
a1.y=y/a.y;
return a1;
}
};
void main()
{
clrscr();
abc ab1(5,5);
ab1.put();
abc ab2(15,30);
ab2.put();
abc ab3;
ab3=ab2/ab1;
ab3.put();
getch();
}



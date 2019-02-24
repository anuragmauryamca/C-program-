#include<iostream.h>
#include<conio.h>
class base
{
int i;
public:
void getdatai(int num)
{
i=num;
}
int seti()
{
return i;
}
};
class derived:public base
{
int j;
public:
void getdataj(int num)
{
j=num;
}
int setj()
{
return j;
}
};
void main()
{
clrscr();
base *sp;
derived p;
sp=&p;
sp->getdatai(10);
cout<<sp->seti();
//sp->getdata();

getch();
}
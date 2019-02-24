#include<iostream.h>
#include<conio.h>
class as
{
int x,y;
public:
void getdata()
{
cout<<"enter the value x and y";
cin>>x>>y;
}
friend int mul(as obj);
};
int mul(as obj)
{
return int (obj.x*obj.y);
}
void main()
{
clrscr();
as obj;
obj.getdata();
int a;
a=mul(obj);
cout<<a;

getch();
}
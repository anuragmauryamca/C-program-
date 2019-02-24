#include<iostream.h>
#include<conio.h>
class abc
{
int a,b;
public:
void getdata()
{
cout<<"enter the value x y";
cin>>a>>b;
}
friend int sum(abc obj);
};
int sum(abc obj)
{
return int(obj.a+obj.b)/2*2;




}
void main()
{
clrscr();

abc obj;
obj.getdata();
int s;
s=sum(obj);
cout<<s;
getch();
}
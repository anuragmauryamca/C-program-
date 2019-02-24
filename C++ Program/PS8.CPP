#include<iostream.h>
#include<conio.h>
class abc
{
private:
int x,y,z;
public:
void getdata()
{
cout<<"enter the value x&y";
cin>>x>>y>>z;
}
friend float sum(abc obj);
};
float sum(abc obj)
{
return float (obj.x+obj.y+obj.z)/2.0;
}
void main()
{
clrscr();
abc obj;
obj.getdata();
float a;
a=sum(obj);
cout<<a;
getch();
}

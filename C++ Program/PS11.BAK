#include<iostream.h>
#include<conio.h>
class abc
{
int x,y;
public:
void getdata()
{
cout<<"enter the value x and y";
cin>>x>>y;
}
friend int mul(abc obj);
};
int mul(abc obj)
{
return int(obj.x*obj.y);
}
void main()
{
abc obj;
obj.getdata();
int m;
m=mul(obj);
cout<<m;
getch();
}


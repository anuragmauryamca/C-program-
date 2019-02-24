#include<iostream.h>
#include<conio.h>
class sintfic
{
int x;
int y;

public:
void set_value(int,int)     ;
int area(int x,int y)
{

return x*y;
}
}       ;
void sintfic::set_value(int a,int b)
{
x=a;
y=b;

}
int main()
{
sintfic ps;
clrscr();
ps.set_value(10,10);
cout<<"the"ps.area();
getch();
return 0;
}

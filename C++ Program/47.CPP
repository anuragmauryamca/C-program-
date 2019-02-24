#include<iostream.h>
#include<conio.h>
class shahi
{
int x,y;
public:
shahi(int a,int b)
{
x=a;
y=b;
cout<<x+y;
}
shahi(float a,float b)
{
x=a;
y=b;
cout<<x*y;
}
};
void main()
{
clrscr();
shahi sp(5,6);
shahi sp1(11,2.2);
getch();
}

#include<iostream.h>
#include<conio.h>
class sum
{
int a,b;
public:
void getdata()
{
cout<<"enter the two number";
cin>>a>>b;
}
void display()
{
int c;
c=a+b;
cout<<c;
}
main()
{
sum c;
sum *objadd=*c;
c->getdata();
c->display();

getch()
return 0;
}
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void wel()
{
cout<<  "welcome"<<endl;
}
void data()
{
int a;
 cout<<"pleas wait" ;
for(a=1;a<=5;a++)
{

 cout<<"." ;
 delay(a*100);
}
void sum()
{
int c=2,d=3,e;
e=c+d;
cout<<e;
}

void main()
{
clrscr();
wel();
data();
sum();
getch();
}  ;

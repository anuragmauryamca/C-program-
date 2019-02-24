#include<iostream.h>
#include<conio.h>
class pradeep
{
int num1 ;
int num2;
public:
void read();
int max();
void showmax();
};

  void pradeep::read()

{
cout<<"enter the first value";
cin>>num1;
cout<<"enter the second value";
cin>>num2;
}
int pradeep::max()
{
if(num1>num2)

return num1;

else

return num2;
}
void pradeep::showmax()
{
cout<<"maximum="<<max();
}
void main()

{
clrscr();
pradeep obj;
obj.read();
obj.showmax();
getch();
}

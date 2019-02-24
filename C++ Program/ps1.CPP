#include<iostream.h>
#include<conio.h>
class ps
{
int age;
int roll;
char name[10];
public:
void getdata();
void setdata();
};
void ps::getdata()
{
cout<<"enter the age";
cin>>age;
cout<<"enter the rollno";
cin>>roll;
cout<<"enter the name";
cin>>name;
}
void ps::setdata()
{
cout<<age;
cout<<roll;
cout<<name;
}
int main()
{
ps sp;
clrscr();
sp.getdata();
sp.getdata();
cout<<"student details is";
sp.setdata();
sp.setdata();
getch();
return 0;
}

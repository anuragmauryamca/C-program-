#include<iostream.h>
#include<conio.h>
class p
{

char name[10];
int roll;
char sex[10];
int age;
public:
void input()
{
int i;
for(i=1;i<=2;i++)
{
cout<<"enter the name ";
cin>>name;
cout<<"enter the rollno";
cin>>roll;
cout<<"enter the sex";
cin>>sex;
cout<<"enter the age";
cin>>age;
}
}
void display()
{
int j;
for(j=1;j<=2;j++)
{
cout<<name<<endl;
cout<<roll<<endl;
cout<<sex<<endl;
cout<<age<<endl;
}
}
};
void main()
{
clrscr();

p s;
s.input();
s.display();
getch();


}
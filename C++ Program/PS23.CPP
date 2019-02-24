#include<iostream.h>
#include<conio.h>
class student
{
int roll;
char name[10];
public:
void getdata(char *p,int a)
{
strcpy(name,p);
roll=a;
}
void putdata()
{
cout<<"name"<<name<<endl;
cout<<"roll"<<roll;
}
student test(student &p);
};
 student::test(student &p)
 {
 if(p.roll>p)
 return p;
 else
 return *this;
 }
 void main()
 {
 student t1,t2,t3;
 clrscr();
 t1.getdata("shahi",25)
 t2.getdata("pradeep",2);
 t3=t1.test(t2);
 cout<<"sahj";
 t3.putdata();
 getch();
 }

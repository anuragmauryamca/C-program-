#include<iosteam.h>
#include<conio.h>
class sp
{
int a;
int b;
int c;
public:
void getdata  ()
{
b=0;
int i;
for(i=0;i<100;i=a+b)
a=b;
b=c;
}
}
void display()
{
cout<<c;
}
};
main()
{
sp p;
p.getdata();
p.display();
return 0;
}






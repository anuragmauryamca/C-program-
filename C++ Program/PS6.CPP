#include<iostream.h>
#include<conio.h>
class pradeep
{
int x,y;
public:
void getdata()
{

cout<<"enter the value of x &y";
cin>>x>>y;
}
friend float sum(pradeep obj)      ;
//friend float avj(pradeep obj2);

};
float sum(pradeep obj)
{
return float(obj.x+obj.y);
}
//friend avj(pradeep obj2)
//{
//return float(obj1.x+obj.y)/2.0


void main()
{
pradeep obj      ;
obj.getdata();
//obj1.gatdata();
//float a;
//a=avj(obj1);
int s;
s=sum(obj);
cout<<s<<endl;
getch();
}

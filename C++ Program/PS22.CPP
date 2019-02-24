#include<iosteram.h>
#include<conio.h>
class add
{
int a;
int b;
public:
void showdata()

{
this->a=12;
this->b=13;

}
void show()
{
cout<<this->a<<this->b;
}
};
void main()
{

add s;
s.showdata();
s.show();
}
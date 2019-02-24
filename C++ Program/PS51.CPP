#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gm=DETECT,gd;
initgraph(&gm,&gd,"c:\\turboc3\\bgi");
cleardevice();
int a;

setbkcolor(YELLOW);
setcolor(RED);
cout<<"B H U BMIIT SP";

for(a=1;a<=6;a++)
{
cout<<".";
delay(1*a);

  }
//floodfill(1,5,5);
//setfillstyle(10,a);

//floodfill(2,3,4);
rectangle(10,50,590,200);
floodfill(2,7,4);
settextstyle(1,0,10);
outtextxy(20,20,"kanhaiya");



getch();
closegraph();

}


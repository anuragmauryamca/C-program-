#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int i,j=0,gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(25,240,"press any key to view the moving car");
//setbkcolor(GREEN);
getch();
for(i=0;i<=400;i=i+10)
{
setcolor(i);
outtextxy(25,200,"MY CAR");
rectangle(50+i,275,150+i,400);
rectangle(150+i,350,200+i,400);
circle(75+i,410,10);
circle(175+i,410,10);
setcolor(i);
delay(200);
if(i==400)
break;
if(j==50)
j=2;
cleardevice();
}
getch();
closegraph();
	}
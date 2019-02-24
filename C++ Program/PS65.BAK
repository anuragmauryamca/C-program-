#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
void diya();
void diya1();
void circle();
void main()
{
int i,gd=DETECT,gm;
int j,k;
//char a[5];
initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(MAGENTA);
diya();
diya1();



getch();
cleardevice();
circle();

//getch();
getch();
closegraph();
}

void diya()
{
outtextxy(320,240,"press any key to start");
getch();


int i;
for(i=0;i<=450;i++)
{

//setbkcolor(MAGENTA);
cleardevice();
setcolor(i);


outtextxy(14+i,21+i,"HAPPY DIWALI PRADEEP MAURYA");
line(14+i,23,21+i,5);
line(25+i,23,22+i,5);
line(8+i,25,33+i,25);
arc(20+i,30,160,21,13);
delay(10);

}
}

void diya1()
{
//outtextxy(320,240,"press any key to start");
//getch();

int i;
for(i=0;i<=250;i++)
{
//setbkcolor(YELLOW);
cleardevice();
setcolor(i);
settextstyle(1,2,2);

outtextxy(23+i,50+i,"HAPPY DIWALI PRSHAHDEENP");


line(14,23+i,21,5+i);
line(25,23+i,22,5+i);
line(8,25+i,33,25+i);
arc(20,30+i,160,21,13);


delay(50);
}
}
void circle()
{
int j;
int i;
int k;

for(k=0;k<200;k+2)
{
for(j=200;j>=0;j--)
{
for(i=1;i<=200;i++)
{
delay(40);
cleardevice();
//setcolor(YELLOW);
circle(320,240,30);
//outtextxy(320,240,"HAPPY DIWALI");
setcolor(i);


circle(320,240+i,200);
circle(320-i,240-i,190);
circle(320+i,240+i,180);
circle(320+i,240-i,170);
circle(320-i,240+i,160);
circle(320,240-i,150-i+i);
circle(320-i,240,140);
circle(320+i,240,130);
circle(320-i,240,120);
circle(320+i,240,110);
circle(320,240+i,100);
circle(320,240+i,205);

circle(316,245+i,5);
circle(316,230+i,5);
circle(316+i,245,5);
circle(316-i,245,5);
circle(316,245-i,5);
circle(316,245+i,2);
circle(316+i,245,2);
circle(316-i,245,2);
circle(316,245-i,2);
outtextxy(316,245-i,"B");
}
circle(316,245+j,5);
circle(316+j,245,5);
circle(316-j,245,5);
circle(316,245-j,5);
circle(316,245+j,2);
circle(316+j,245,2);
circle(316-j,245,2);
circle(316,245-j,2);
outtextxy(316,245+i,"H");

			 }
    cleardevice();
//setcolor(YELLOW);
circle(320,240,30);
//outtextxy(320,240,"HAPPY DIWALI");
setcolor(i);

circle(316,245+k,5);
circle(316+k,245,5);
circle(316-k,245,5);
circle(316,245-k,5);
circle(316,245+k,2);
circle(316+k,245,2);
circle(316-k,245,2);
circle(316,245-k,2);
outtextxy(316-i,245,"U");
outtextxy(316+i,245,"V");
putpixel(320,240,200);






}
}
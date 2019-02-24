#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<alloc.h>
void main()
{
int j,i,gd=DETECT,gm,area,temp1,temp2;
char a[5];
int left=25,top=75,p;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(YELLOW);
circle(50,100,25);
for(i=1;i<=19;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
floodfill(50,100,YELLOW);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(44,85,2,6);
fillellipse(56,85,2,6);
ellipse(50*i,100*i,205*i,335+i,20*i,9*i);
delay(300);
}
area=imagesize(left,top,left+50,top+50);
//p=malloc(area);
 setcolor(WHITE);
 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
 outtextxy(155,451,"smiling face animated");
 setcolor(BLUE);
 rectangle(0,0,639,44);
 //delay(2000);

/* while(!kbhit())
 {
 temp1=1+random(588)  ;
 temp2=1+random(380);
 getimage(left,top,left+50,top+50,p);

  */
getch();
closegraph();
}

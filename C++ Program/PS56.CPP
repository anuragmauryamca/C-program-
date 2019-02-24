#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
void main()
{
int i,gd=DETECT,gm;
int j,k;
char a[5];
initgraph(&gd,&gm,"c:\\tc\\bgi");
//settextjustify(CENTER_TEXT,CENTER_TEXT);

setcolor(RED) ;
outtextxy(40,150,"press any key to start the time");

getch();
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
for(k=1;k<=4;k++)
{
for(j=1;j<=4;j++)
{

for(i=1;i<=4;i++)
{
sprintf(a,"%d",i);
outtextxy(90,240,a);
delay(1000);
if(i==0)
break;
//cleardevice();
sprintf(a,"%d",j);
outtextxy(65,240,a);
delay(1000);
if(j==0)
break;
sprintf(a,"%d",k);
outtextxy(40,240,a);
delay(1000);
if(k==0)
break;
}
}
}
getch();

getch();
closegraph();
}

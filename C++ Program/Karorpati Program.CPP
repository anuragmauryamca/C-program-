
//Kaun bane karodpati//

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int score=0,a,b,c,d,e,f,g,h;
char ch;
int gm=DETECT,gd;
initgraph(&gm,&gd,"c:\\turboc3\\bgi");
//cleardevice();

for(a=1;a<=25;a++)
{
cleardevice();
setbkcolor(GREEN);
setcolor(5);
 settextstyle(1,0,5);
outtextxy(20,10,"KAUN BANEGA CARORPATI");
line(20,70,540,70);
//settextstyle(1,0,5);
//
//outtextxy(12*a,60,"K");
setcolor(9*a);
settextstyle(1,0,4);
circle(320,240,3.7*a);
circle(320,240,2*a);
circle(320,240,1*a);
//circle(320,120,5);
outtextxy(10*a,10.3*a,"K");
outtextxy(9.3*a,9.3*a,"A");
outtextxy(9.3*a,8.3*a,"U");
outtextxy(9.9*a,7.3*a,"N");
outtextxy(9.3*a,6.1*a,"   BANE");
outtextxy(14.4*a,6.7*a,"G");
outtextxy(14.8*a,7.4*a,"A");
outtextxy(14.8*a,8.3*a," K");
outtextxy(15*a,9*a,"A");
outtextxy(15.2*a,10*a,"R");
outtextxy(14.4*a,10.4*a,"O");
outtextxy(14.3*a,11.3*a,"R");
outtextxy(11.2*a,11.3*a,"PATI");
rectangle(10,100,200,400);
rectangle(440,100,630,400);
settextstyle(1,0,3);
outtextxy(25,100,"INTRODUCTION");
outtextxy(510,100,"HELP");
delay(100);
}
getch();
cleardevice();
cout<<"WHAT WILL BE SIZE OF ONE CHARACTER?\n";
cout<<"1.1 bit\n2.8 bit\n3.1024 byte\n4.none\n ";
cin>>b;
if(b==2)
{
score=score+1;
cout<<"score="<<score;
//else
//{
//score=score+0;
//cout<<score;
//}
outtextxy(310,70,"Right");
circle(350,100,70);
}
else
{
outtextxy(310,70,"Wrong");
circle(350,100,70);
}
getch();
cleardevice();
cout<<"WHO IS THE PLAYER THAT MADE DOUBLE CENTURY FIRST IN ODI\n";
cout<<"1.Sachin\n2.Yuvraj\n3.Sehvag\n4.Rohit\n";
cin>>c;
if(c==3)
{
score=score+1;
cout<<"score="<<score;
outtextxy(310,70,"Right");
circle(350,100,70);
}
else
{
outtextxy(310,70,"Wrong");
circle(350,100,70);
}
getch();
cleardevice();
cout<<"THE FULL FORM OF C.P.U?\n";
cout<<"1.Central postion of university\n2.Central processing unit\n3.Complain of public union\n4.Cansole programming language\n";
cin>>d;
if(d==2)
{
score=score+1;
cout<<"score="<<score;
outtextxy(310,70,"Right");
circle(350,100,70);
}
else
{
outtextxy(310,70,"Wrong");
circle(350,100,70);
}
getch();
cleardevice();
cout<<"WHICH TYPE OF LANGUAGE C++ IS?\n";
cout<<"1.High level language \n2.machine language\n3.Assembaly language \n4.None\n";
cin>>e;
if(e==1)
{
score=score+1;
cout<<"score="<<score;
outtextxy(310,70,"Right");
circle(350,100,70);
}
else
{
outtextxy(310,70,"Wrong");
circle(350,100,70);
}
getch();
cleardevice();
cout<<"The first woman pm of india\n";
cout<<"1.Susmita sen\n2.Sarojani nayedo\n3.Soniy gandhi\n4.Indra gandhi\n";
cin>>f;
if(f==4)
{
score=score+1;
cout<<"score="<<score;
outtextxy(310,70,"Right");
circle(350,100,70);
}
else
{
outtextxy(310,70,"Wrong");
circle(350,100,70);
}
getch();
cleardevice();
setbkcolor(RED);
cout<<"Who is the actor of milan movie\n";
cout<<"1.Rajesh Khanna\n2.Shami Kapoor\n3.Amitabh Bachan\n4.Sunil Datt\n";
cin>>g;
if(g==4)
{
score=score+1;
cout<<"score="<<score;
outtextxy(310,70,"Right");
circle(350,100,70);
}
else
{
outtextxy(310,70,"Wrong");
circle(350,100,70);
}
getch();
cleardevice();
cout<<"Q.Who is the devloper of c++ Language ?\n";
cout<<"1.Denim richi\n2.Batcolub\n3.Chals Beveg\n4.Bjarne Stoustrup\n";
if(h==4)
{
score=score+1;
cout<<"score="<<score;
outtextxy(310,70,"Right");
circle(350,100,70);
}
else
{
outtextxy(310,70,"Wrong");
circle(350,100,70);
}
getch();
cleardevice();
closegraph();
}


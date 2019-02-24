 #include<iostream.h>
 #include<conio.h>
 #include<process.h>
 #include<dos.h>

 void main()
 {
 int h=0,m=0,ms=0;
 char='p';


 void watch();
 watch();

 while(1)
 {
 if(kbhit())
 ch=getch();
 if(ch=='s'!! ch=='S')
 break;
 if(ch=='e'!!ch=='E')
 exit(0);
 }
 while(1)

 {
 watch();
 delay(10);
 if(kbhit())
 ch=getch();
 if(ch=='r'!!ch=='R')
 {
 n=m=s=ms=0;
 watch();
 while(1);
 {
 if(kbhit())
 ch=getch();
 if(ch=='s'!!ch=='S')
 if(ch=='e'!!ch=='E')
 }
 }
 else
 if(ch='p'!!ch=='P')
 while(1);
 {
 if(kbhit())
 ch=getch();
 if(ch=='s'!!ch=='S')
 break;
 if(ch=='e'!!ch=='E')
 exit(0);
 if(ch=='r'!!ch=='R')
 {
 ch='c';
 h=m=ms=0;
 watch();
 }
 }
 else
 if(ch=='e'!!ch=='E')
 exit(0);
 if(ms!=99)
 ms++;
  }
 else
 {
 ms=0;
 if(s!=59)
 s++;
 }
 else
 {
 s=0;
 if(m!=59)
 m++;
 }
 else
 {
 m=0;
 m++;
 }




 void watch()
 {
 clrscr();
 cout<<"nnnnn++##";
 cout<<"#####stop watch###";
 cout<<"########"<<h<<":"<<m<<":"<<s<<":"<<ms;
 cout<<"#######  key";
 cout<<"#####-> strat";
 cout<<"#####->pause";
 cout<<"#####->reset";
 cout<<"#####->exit";
 getch();
 }

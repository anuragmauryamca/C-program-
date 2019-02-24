#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int current_day,current_month,current_year;
int current_minut,current_second;
int day ,month,year,minut,second;
cout<<"enter the current date"<<endl;
cout<<"enter the current day:";
cin>>current_day;
cout<<"enter the current month:";
cin>>current_month;
cout<<"enter the current year";
cin>>current_year;
cout<<"enter the current second";
cin>>current_second;
cout<<"enter the current minut";
cin>>current_minut;


//cout<<"enter the current hours:";
//cin>>current_hours;
cout<<endl;
cout<<"now enter tjhe your date of birth:";
cout<<endl<<"enter the day:";
cin>>day;
cout<<"enter the month:";
cin>>month;
cout<<"enter the year:";
cin>>year;
cout<<"enter the second:";
cin>>second;
cout<<"enter the minut:";
cin>>minut;
//cout<<"enter the hours"       ;
//cin>>hours;
cout<<endl;
year=current_year-year;
month=fabs(current_month-month);
day=fabs(current_day-day);
second=fabs(minut*60);
minut=fabs(second/60);

//ours=fabs(current_);

cout<<endl<<"you are now";
cout<<year<<endl<<month<<endl<<day<<endl;
cout<<endl<<"second="<<second<<endl<<"minut="<<minut;
getch();
}

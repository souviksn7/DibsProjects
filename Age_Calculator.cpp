//Program to check your age till date


#include<iostream.h>
#include<conio.h>
void main()
{
int birth_month,birth_year;
int current_month,current_year;
int ageinyear,ageinmonth;
cout<<"Age Calculator\n\n";

cout<<"\nEnter Your Birth Month(Eg:8): ";
cin>>birth_month;
cout<<"\nEnter Your Birth Year(Eg:1999): ";
cin>>birth_year;

cout<<"\nEnter The Current Month(Eg:12): ";
cin>>current_month;
cout<<"\nEnter The Current Year(Eg:2020): ";
cin>>current_year;
  if(current_month<birth_month)
   {current_month +=12;
    current_year--;
   }
ageinyear=current_year-birth_year ;   
ageinmonth=current_month-birth_month ;
cout<<"\n\nYour Age is "<<ageinyear<<" Years And "<<ageinmonth<<" Months ";
getch();
}

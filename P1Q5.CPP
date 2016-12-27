/*
Program No	: 05
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 27-July-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  unsigned long bus, suv, car ,tw, total;
  cout<<"Enter number of buses :\n";
  cin>>bus;
  cout<<"Enter number of cars :\n";
  cin>>car;
  cout<<"Enter number of SUV's :\n";
  cin>>suv;
  cout<<"Enter number of two wheelers :\n";
  cin>>tw;
  total=(bus*100)+(car*30)+(suv*40)+(tw*10);
  cout<<"Total collection = Rs."<<total;
  getch();
}
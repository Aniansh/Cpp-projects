/*Program to claculate commission
  based upon the sales*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  cout<<"Enter sales :"<<endl;
  float sales,com;
  cin>>sales;
  if(sales>=100000)
    com=0.1*sales;
  else
    if(sales>=50000)
      com=0.08*sales;
    else
      if(sales>=25000)
	com=0.05*sales;
      else
	com=0;
  cout<<"Your commission = "<<com<<endl;
  getch();
}
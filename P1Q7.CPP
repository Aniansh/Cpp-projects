/*
Program No	: 07
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 29-July-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char Status;
  float TOT, PER, ENG, MAT, SCI;
  cout<<"Enter your Maths marks\n";
  cin>>MAT;
  cout<<"Enter your Science marks\n";
  cin>>SCI;
  cout<<"Enter your English marks\n";
  cin>>ENG;
  TOT=ENG+MAT+SCI;
  PER=TOT/3;
  cout<<"Total marks  = "<<TOT;
  cout<<"\nPercentage = "<<PER<<"\nStatus = ";
  Status =(PER>=50) ? 'S':'N';
  if(Status=='S')
    cout<<"Selected\n";
  else
    cout<<"Not Selected\n";
  getch();
}



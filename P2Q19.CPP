/*
Program no	: 19
Developed by	: Akshat Ayush, Aniansh Raj Singh
Class		: XI G
Date		: 26-September-2016
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,temp,sum=0,rem;
  cout<<"Enter an integer\n";
  cin>>num;
  temp=num;
  for(int i=temp;i>0;i/=10)
  {
    rem=i%10;
    sum=sum+(rem*rem*rem);
  }
  if(sum==num)
    cout<<"Armstrong number";
  else
    cout<<"Not an armstrong number";

  getch();
}
/*
Program no	: 18
Developed by	: Akshat Ayush, Aniansh Raj Singh
Class		: XI G
Date		: 19-August-2016
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  int num,flag=0;
  cout<<"Enter an integer : ";
  cin>>num;
  for(int i=2;i<=sqrt(num);i++)
  {
    if(num%i==0)
     flag++;
  }
  if(flag==0)
    cout<<"Prime Number";
  else
    cout<<"Composite number";
  getch();
}
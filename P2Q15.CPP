/*
Program no	: 15
Developed by	: Akshat Ayush, Aniansh Raj Singh
Class		: XI G
Date		: 12-August-2016
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int N; unsigned long F=1;
 cout <<"Enter Number\n";
 cin>>N;
 for(int i=1;i<=N;i++)
 {
  F=i*F;
 }
 cout <<N<<"! = "<<F<<endl;
 getch();
}
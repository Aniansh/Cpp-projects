/*
Program no	: 16
Developed by	: Akshat Ayush, Aniansh Raj Singh
Class		: XI G
Date		: 12-August-2016
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int A,Y,X;
 float Result=1;
 cout<<"Enter integer values of X and Y to get X^Y\n";
 cin>>X>>Y;
 if(Y<0)
   A=-Y;
   else
   A=Y;
   for(int i=1;i<=A;i++)
   {
    Result=Result*X;
   }
   if(Y<0)
   Result=1/Result;
   else if(Y==0)
   Result=1;
   cout<<X<<"^"<<Y<<" = "<<Result<<endl;
   getch();
}
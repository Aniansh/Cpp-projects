/*
Program no	: 03
Developed by	: Akshat Ayush, Aniansh Raj Singh
Class		: XI G
Date		: 22-July-2016
*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 cout<<"Welcome to the program!\n";
 cout<<"Enter marks out of 100\n";
 float m1,m2,m3,m4,m5,tot,avg;
 cout<<"Physics: \n";
 cin>>m1;
 cout<<"Chemistry: \n";
 cin>>m4;
 cout<<"Computer Science: \n";
 cin>>m5;
 cout<<"Maths: \n";
 cin>>m2;
 cout<<"English: \n";
 cin>>m3;
 tot=m1+m2+m3+m4+m5;
 avg=tot/5;
 cout<<"Your Total marks are: "<<tot<<"\nYour average marks are: "<<avg;
 getch();
}
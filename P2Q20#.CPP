/*
Program no	: 20
Developed by	: Akshat Ayush, Aniansh Raj Singh
Class		: XI G
Date		: 26-September-2016
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a;
  char choice;
  float length,breadth,base,height,radius;
  double area;
  do
  {
    a=0;
    clrscr();
    cout<<"Enter your choice :\n";
    cout<<"1. Area of rectangle\n";
    cout<<"2. Area of circle\n";
    cout<<"3. Area of triangle\n";
    cin>>choice;
    switch(choice)
    {
	case '1':
		cout<<"Enter length\n";
		cin>>length;
		cout<<"Enter breadth\n";
		cin>>breadth;
		area=length*breadth;
		break;
	case '2':
		cout<<"Enter radius\n";
		cin>>radius;
		area=2*3.14*radius*radius;
		break;
	case '3':
		cout<<"Enter height\n";
		cin>>height;
		cout<<"Enter base\n";
		cin>>base;
		break;
	default:
		cout<<"Error! Invalid input\n";
		a=1;
    }
    if(a==0)
    cout<<"Area = "<<area;
    cout<<"\nPress 1 to re-run and 0 to terminate\n";
    choice=getch();
    }
  while(choice=='1');
}
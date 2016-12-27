/*
Program No	: 08
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 03-August-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 cout<<"Please enter your Grade(from A to F):\n";
 char Grade;
 cin>>Grade;
 switch(Grade)
 {
  case 'A':
  case 'a':cout<<"Marks Range: 100-90";break;
  case 'B':
  case 'b':cout<<"Marks Range: 89-75";break;
  case 'C':
  case 'c':cout<<"Marks Range: 74-60";break;
  case 'D':
  case 'd':cout<<"Marks Range: 59-45";break;
  case 'E':
  case 'e':cout<<"Marks Range: 44-33";break;
  case 'F':
  case 'f':cout<<"Marks Range: 32-0";break;
  default:cout<<"Invalid Grade!";
  }
  getch();
}


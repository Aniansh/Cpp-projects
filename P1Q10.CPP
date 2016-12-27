/*
Program No	: 10
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 29-July-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char gender;
  int age,floor;
  cout<<"Enter your age\n";
  cin>>age;
  cout<<"Enter your gender\nM for male and F for Female\n";
  cin>>gender;
  switch(gender)
  {
    case 'M':
    case 'm':
      if(age>=60)
	floor=7;
      else
	if(age>=20)
	  floor=6;
	else
	  if(age>=10)
	   floor=5;
	  else
	    floor=4;
    break;
    case 'F':
    case 'f':
    if(age>=58)
	floor=3;
      else
	if(age>=18)
	  floor=2;
	else
	  if(age>=10)
	   floor=1;
	  else
	    floor=0;
    break;
    default:
      cout<<"Wrong Input\n";
  }
  cout<<"Floor : "<<floor<<endl;
  getch();
}


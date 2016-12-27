/*
Program No	: 11
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 29-July-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char ch;
  cout<<"Enter a character\n";
  ch=getch();
  cout<<ch<<endl;
  if(ch>='a'&&ch<='z')
    cout<<"\nSmall Case Alphabet";
  else
    if(ch>='A'&&ch<='Z')
       cout<<"\nCapital Alphabet";
   else
     if(ch>='0'&&ch<='9')
       cout<<"\nDigit";
     else
       if(ch==32)
	 cout<<"\nSpace";
       else
	 cout<<"\nSpecial Character";
  getch();
}
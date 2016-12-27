/*Program to check whether character is
an alphabet, a digit or a special character*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char ch;
  cout<<"Enter a character"<<endl;
  cin>>ch;
  if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    cout<<"Character is an alphabet"<<endl;
  else
    if(ch>='0'&&ch<='9')
      cout<<"Character is a digit"<<endl;
    else
      cout<<"Character is a special character"<<endl;
  getch();
}
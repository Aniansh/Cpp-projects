#include<iostream.h>
#include<conio.h>
void spaces(int i)
{
int space=0;
 while(space<=i)
  {
  cout<<" ";
  space++;
  }
}
void main()
{
  char control;
  int x=70, space=0;
  clrscr();
  int c=1;

  while(1)
  {
    control=getch();
    if(control==75)
    c--;
    else if(control==77)
    c++;
    else if(control=='Q'||control=='q')
    break;


 // for(unsigned long i=1;i<1000000;i++)
  {}
  clrscr();
  spaces(c);
  cout<<"   _____  \n";
  spaces(c);
  cout<<" _/______\\_ \n";
  spaces(c);
  cout<<"|-0-----0-|  \n ";

  x--;


  }
}

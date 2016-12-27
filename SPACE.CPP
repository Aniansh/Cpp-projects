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
    if(control=='a'||control=='A')
    c--;
    else if(control=='d'||control=='D')
    c++;
    else if(control=='Q'||control=='q')
    break;


 // for(unsigned long i=1;i<1000000;i++)
  {}
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  spaces(c);
  cout<<"___/ \\___\n";
  spaces(c);
  cout<<"|_______|\n";
  spaces(c);
 // cout<<"|_______|\n ";

  x--;


  }
}

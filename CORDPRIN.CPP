#include<iostream.h>
#include<conio.h>
#include<math.h>
#define Step cprint('o', x, y)
void cprint (char a, int x, int y)
{
  for(int i=0;i<=(24-y);i++)     //x:0-79 y:0-24
	cout<<endl;
  for(int j=0;j<=x;j++)
	cout<<" ";
  cout<<a;
}
void main()
{
  clrscr();
   int x=0, y=0,a;
   unsigned long ydel=100000;
   while(y<=20)
   {
     Step;
     for(unsigned long j=0;j<=10000000;j++)
     {
      if(j==ydel)
      {
	y++;
	clrscr();
	Step;
      }



     }
     x++;
     ydel+=50000;
     clrscr();


    }
  getch();
}
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int pos=1, height = 24 ;unsigned long delay=10000000;
  for(int x=1;x<=13;x++)
  {
  for(int i =1;i<=height;i++)
  {
    for(int k=1;k<=pos;k++)
   {
   cout<<endl;
   }
   cout<<"o";
   for(unsigned long j=1;j<=delay;j++)
   {
   }
   clrscr();

   pos++;
   delay/=1.2;



  }
    height-=2;

   for(int j =1;j<=height;j++)
  {

   for(int k=1;k<=pos;k++)
   {
   cout<<endl;
   }
   cout<<"o";
   for(unsigned long j=1;j<=delay;j++)
   {
   }

   clrscr();

   pos--;
   delay*=1.2;



  }

   }









     cout<<"Success!";
  getch();
}
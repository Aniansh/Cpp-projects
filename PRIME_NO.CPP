//to find whether a number is prime or not
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  int num,flag=0;
  cout<<"Enter a number\n";
  cin>>num;
  for(int i=2;i<=sqrt(num);i++)
  {
    if(num%i==0)
     flag++;
  }
    if(!flag)
      cout<<"Prime";
    else
      cout<<"Not Prime";
    getch();
}
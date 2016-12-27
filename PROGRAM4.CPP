/*program to print square if number
is even and cube if number is odd*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,sq,cube;
  cout<<"\nEnter a number";
  cin>>num;
  if(num%2==0)
  {
    cout<<"\nEven number";
    sq=num*num;
    cout<<"\nSquare = "<<sq;
  }
  else
  {
    cout<<"\nOdd number";
    cube=num*num*num;
    cout<<"\nCube = "<<cube;
  }
  getch();
}
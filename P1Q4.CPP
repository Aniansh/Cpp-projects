/*
Program No	: 04
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 27-July-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int Cnumber, Floor, Block;
  cout << "Please enter the customer number\n";
  cin >> Cnumber;
  Cnumber--;
  Block = (Cnumber/5)+65;
  Floor = (Cnumber%5);
  cout <<"Block : "<<char(Block)<<"\nFloor : "<<Floor<<endl;
  getch();
}
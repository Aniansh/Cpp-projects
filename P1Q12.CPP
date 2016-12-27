/*
Program No	: 12
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 27-July-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int Class;
  char Stream, Block;
  cout <<"Please enter your class\n";
  cin>>Class;
  cout<<"Please choose your stream\nS)Science\nH)Humanities\nC)Commerce\n";
  cin>> Stream;
  switch(Class)
  {
    case 11:
     switch(Stream)
     {
       case 'H':
       case 'h':Block='D';break;
       case 'S':
       case 's':Block='F';break;
       case 'C':
       case 'c':Block='E';break;
       default: cout<<"Invalid Stream!\n";
     } break;
    case 12:
     switch(Stream)
     {
       case 'H':
       case 'h':Block='A';break;
       case 'S':
       case 's':Block='C';break;
       case 'C':
       case 'c':Block='B';break;
       default: cout<<"Invalid Stream!\n";
     }break;
    default:cout<<"Invalid Class!\n";
  }
  cout<<"Your block is "<<Block<<" Block\n";
  getch();
}



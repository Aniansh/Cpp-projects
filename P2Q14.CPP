/*
Program no	: 14
Developed by	: Akshat Ayush, Aniansh Raj Singh
Class		: XI G
Date		: 12-August-2016
*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch;
 int n,alpha=0,digit=0,spec=0;
 cout<<"Enter number of characters : "<<endl;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
   cout<<"Enter character "<<i<<" : "<<endl;
   cin>>ch;
   if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
     {  cout<<"\"Alpha\"\n\n";
	alpha++;
     }
   else
     if(ch>='0'&&ch<='9')
       {  cout<<"\"Digit\"\n\n";
	  digit++;
       }
     else
       {  cout<<"\"Special\"\n\n";
	  spec++;
       }
 }
 cout<<"\nNumber of Alphabets entered = "<<alpha<<endl;
 cout<<"Number of Digits entered = "<<digit<<endl;
 cout<<"Number of Special characters entered = "<<spec<<endl;
 getch();
}
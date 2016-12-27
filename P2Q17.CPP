/*
Program no	: 17
Developed by	: Akshat Ayush, Aniansh Raj Singh
Class		: XI G
Date		: 19-August-2016
*/
#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n,A=0,B=0,C=0,D=0,E=0;
   float marks;
   cout<<"Enter number of students : ";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     cout<<"\nEnter marks of student "<<i<<" out of 100 : ";
     cin>>marks;
     if(marks>32)
       if(marks>50)
	 if(marks>70)
	   if(marks>90)
	     {
	       cout<<"Grade A\n";
	       A++;
	     }
	   else
	     {
	       cout<<"Grade B\n";
	       B++;
	     }
	 else
	   {
	       cout<<"Grade C\n";
	       C++;
	   }
       else
	 {
	    cout<<"Grade D\n";
	    D++;
	 }
     else
       {
	  cout<<"Grade E\n";
	  E++;
       }
   }
   cout<<"\nNumber of students getting grade A : "<<A;
   cout<<"\nNumber of students getting grade B : "<<B;
   cout<<"\nNumber of students getting grade C : "<<C;
   cout<<"\nNumber of students getting grade D : "<<D;
   cout<<"\nNumber of students getting grade E : "<<E;
   getch();
}
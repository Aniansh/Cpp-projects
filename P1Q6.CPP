/*
Program No	: 06
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 29-July-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  float salary,DA,HRA,IT,TSAL,SALH;
  cout<<"\nEnter basic salary: ";
  cin>>salary;
    DA=0.3*salary;
    HRA=0.25*salary;
    if(salary<50000)
     IT=0.1*salary;
    else
     IT=0.2*salary;
    TSAL=salary+DA+HRA;
    SALH=TSAL-IT;
    cout<<"\nDearness Allowance = "<<DA;
    cout<<"\nHouse Rent Allowance = "<<HRA;
    cout<<"\nIncome Tax = "<<IT;
    cout<<"\nTotal Salary = "<<TSAL;
    cout<<"\nSalary in hand = "<<SALH;
  getch();
}
/*Program to calculate net salary
from basic salary*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  float salary,DA,HRA,PF,ns;
  cout<<"\nEnter basic salary";
  cin>>salary;
  if(salary>=25000)
  {
    DA=0.25*salary;
    HRA=0.2*salary;
    PF=0.15*salary;
  }
  else
  {
    DA=0.2*salary;
    HRA=0.12*salary;
    PF=0.15*salary;
  }
  ns=salary+DA+HRA-PF;
  cout<<"Net Salary = "<<ns<<endl;
  getch();
}
/*
Program No	: 09
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 29-July-2106
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  double n1,n2,res;
  char op;
  cout<<"Enter two numbers: \n";
  cin>>n1>>n2;
  cout<<"\nEnter an arithmetic operator";
  cout<<"\n+ for addition\n- for subtraction\n";
  cout<<"* for multiplication\n/ for division\n% for modulus\n";
  cin>>op;
  switch(op)
  {
    case'+': res=n1+n2; break;
    case'-': res=n1-n2; break;
    case'*': res=n1*n2; break;
    case'/': res=n1/n2; break;
    case'%': res=(int)n1%(int)n2; break;
    default : cout<<"/nWrong operator";
  }
  cout<<n1<<" "<<op<<" "<<n2<<" = "<<res<<endl;
  getch();
}
/*
Program No	: 13
Developed By	: Aniansh Raj Singh, Akshat Ayush
Class		: XI G
Date		: 12-August-2016
*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,n,sum=0;
  cout<<"Enter number of terms to be summed : "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cout<<"Enter number "<<i<<" : "<<endl;
    cin>>num;
    sum+=num;
  }
  cout<<"Sum of "<<n<<" numbers = "<<sum;
  getch();
}

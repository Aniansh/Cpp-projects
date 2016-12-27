#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int array[10];
  for(int i=0;i<=9;i++)
  {
    cout<<"Enter element "<<i+1<<'\n';
    cin>>array[i];
  }
  int k=8,x;
  for(int l=1;l<=10;l++)
  {
    for(int j=0;j<=k;j++)
    {
      x=array[j+1];
      array[j+1]=array[j];
      array[j]=x;
    }
    k--;
  }
  cout<<"Reversed array : ";
  for(i=0;i<=9;i++)
  cout<<array[i]<<"  ";
  getch();
}
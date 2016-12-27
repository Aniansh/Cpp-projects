#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a, b, max, hcf, lcm;
 cout<<"Enter two different numbers\n";
 cin>>a>>b;
 (a>b)?max=a:max=b;
 while(max%a!=0 || max%b!=0)
 max++;
 lcm=max;
 hcf=(a*b)/lcm;
 cout<<"LCM = "<<lcm<<" HCF = "<<hcf<<endl;
 getch();
}
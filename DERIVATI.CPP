#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int i=0,choice;
 cout<<"Enter your choice\n";
 cout<<"1.Derivative\n2.Integral\n";
 cin>>choice;
 cout<<"ENTER TERMS IN DECREASING ORDER OF POWERS\n";
 char var;
 double coeff[6];
 int pows[6];
 int terms;
 cout<<"Enter number of terms(max 6)\n" ;
 cin>>terms;


 cout<<"Enter x in dy/dx\n";
 cin >>var;
 for(int x=1;x<=terms;x++)
 {
  cout<<"Enter coefficient " << i+1<<" (with sign)"<<endl;
 cin>>coeff[i];
 cout<<"Enter power "<<i+1<<
 endl;
 cin>>pows[i];
 i++;
}
if(choice ==1)
{
i=0;
cout<<"dy/d"<<var<<"= ";
for(int j=1;j<=terms;j++)
{
coeff[i]*=(pows[i]);
pows[i]--;
if(coeff[i]!=0)
{
cout<<coeff[i]<<var<<"^"<<pows[i];

(coeff[i]>0)?cout<<"  +":cout<<" ";
}



i++;
}
}
else if(choice==2)
{
 i=0;
cout<<"indefinite integral of y w.r.t."<<var<<"= ";
for(int j=1;j<=terms;j++)
{
coeff[i]/=(pows[i]+1);
pows[i]++;
if(coeff[i]!=0)
{
cout<<coeff[i]<<var<<"^"<<pows[i];

(coeff[i]>0)?cout<<"  +":cout<<" ";
}

cout<<" + C";
i++;
}

}
 getch();


}
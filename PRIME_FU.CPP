#include<iostream.h>
#include<conio.h>
int isprime(int N);
void main()
{
clrscr();
int A;
cout<<"Enter a number\n";
cin>>A;
if(isprime(A))
cout<<"Prime\n";
else
cout<<"Not Prime\n";
getch();
}

int isprime(int N)
{
 int flag=1;
 for(int i =2;i<N;i++)
 {
 if(N%i==0)
 flag=0;
 }
 return flag;
}
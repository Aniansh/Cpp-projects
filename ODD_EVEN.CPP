#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,even=0,odd=0,rem;
	cout<<"Enter a number\n";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==0)
			even++;
		else
			odd+=rem;
		num=num/10;
	}
	cout<<"No. of even digits = "<<even;
	cout<<"\nSum of odd digits = "<<odd;
	getch();
}

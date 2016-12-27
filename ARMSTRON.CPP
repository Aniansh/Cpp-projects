#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,rem,temp,sum=0;
	cout<<"Enter a number\n";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==num)
		cout<<"Armstrong number";
	else
		cout<<"Not an armstrong number";
	getch();
}
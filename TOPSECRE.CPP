#include<iostream.h>
#include<conio.h>
board[3][3]={{1,2,3},{4,5,6},{7,8,9}};
void print()
{
	cout<<"     |     |     "<<endl;
	cout<<"  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"-----------------"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"-----------------"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<endl;
	cout<<"     |     |     "<<endl;
}
int wincheck()
{

}

void main()
{
  clrscr();
  print();
  getch();
}
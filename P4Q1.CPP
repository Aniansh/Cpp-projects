#include<iostream.h>
#include<conio.h>
float MaxMarks(float[],int);
float MinMarks(float[],int);
void main()
{
   clrscr();
   int n;
   float Marks[10];
   do
   {
     cout<<"Enter number of students(<=10)\n";
     cin>>n;
   }
   while(n>10);
   for(int i=0;i<n;i++)
   {
     cout<<"Enter marks of student "<<i+1<<" : ";
     cin>>Marks[i];
     cout<<endl;
   }
   cout<<"Maximum marks attained = "<<MaxMarks(Marks,n)<<endl;
   cout<<"Minimum marks attained = "<<MinMarks(Marks,n)<<endl;
   getch();
}
float MaxMarks(float marks[],int n)
{
   float max=marks[0];
   for(int i=0;i<n;i++)
     if(marks[i]>max)
       max=marks[i];
   return max;
}
float MinMarks(float marks[],int n)
{
  float min=marks[0];
  for(int i=0;i<n;i++)
     if(marks[i]<min)
       min=marks[i];
  return min;
}
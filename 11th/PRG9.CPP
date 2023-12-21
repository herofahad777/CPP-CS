//To print sum of first ten numbers
#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int n , sum = 0;

cout<<"Enter 10 numbers";
for(int i=1;i<=10;i++)
{
 cin>>n;
 sum = sum + n;
}

cout<<sum;
getch();
}
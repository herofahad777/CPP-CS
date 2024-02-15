#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int sum=0, n;

cout<<"Enter a number"<<endl;

cin>>n;

while(n>0)
{
sum = sum+n%10;
n = n/10;
}

cout<<"Sum of digits "<<sum<<endl;
getch();
}
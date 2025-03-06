//To print Fibonacci series
#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int num, n1=0, n2=1, n3;

cout<<"Enter a positive number\n";
cin>>num;

for(int i=1;i<=num;i++)
{
n3=n1+n2;
if(i==1)
{
cout<<n1;
continue;
}
if(i==2)
{
cout<<", "<<n2;
continue;
}
cout<<", "<<n3;
n1=n2;
n2=n3;
}
getch();
}
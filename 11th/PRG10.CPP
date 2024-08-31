//To print Fibonacci series
#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int num, n1=0, n2=1, n3;

cout<<"Enter a positive number\n";
cin>>num;
cout<<"0, 1";

for(int i=0;i<n;i++)
{
n3=n1+n2;
if(n3>n)
{
break;
}
cout<<", "<<n3;
n1=n2;
n2=n3;
}
getch();
}
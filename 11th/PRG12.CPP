//To print reverse of a number.
#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int n,rev = 0,r;
cout<<"Enter a number\n";
cin>>n;

while(n!=0)
{
r = n%10;
rev = rev * 10 + r;
n = n/10;
}

cout<<"Reversed number is "<<rev;
getch();
}
//To find whether number is prime or composite
#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int num ,chk = 1;

cout<<"Enter any number";
cin>>num;

for(int i=2;i<num;i++)
{
if(num%i==0)
{
 chk = 0;
}
}
 if(chk == 1)
 {
 cout<<"The number is prime";
 }
 else
 {
 cout<<"The number is composite";
 }
 getch();
}
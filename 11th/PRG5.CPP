//To find sum and avg of 5 numbers.
#include <iostream.h>
#include <conio.h>

void main()
{
clrscr;
double n1,n2,n3,n4,n5,avg;

cout<<"Enter any 5 numbers \n";
cin>>n1>>n2>>n3>>n4>>n5;

avg = (n1 + n2 + n3 + n4 + n5)/5;

cout<<"Average of 5 numbers = "<<avg;
getch();

}
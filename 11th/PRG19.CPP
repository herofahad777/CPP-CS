//To swap number using pointer
#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int a , b;
 cout<<"Enter two numbers\n";
 cin>>a>>b;
 int *x , *y , temp;
 x = &a;
 y = &b;
 temp = *x;
 *x = *y;
 *y = temp;
 cout<<"Numbers after swapping: ";
 cout<<"\nFirst number is "<< a;
 cout<<"\nSecond number is "<< b;
 getch();
}
//To print Area and Perimeter of a rectangle using functions.
#include <iostream.h>
#include <conio.h>

float area(float l, float b)
{
return (l*b);
}

float perimeter(float l, float b)
{
return (2*(l+b));
}

void main()
{
 clrscr();
 float l , b;
 cout<<"Enter length and breadth of rectangle\n";
 cin>>l>>b;
 cout<<"Area of a rectangle is "<<area(l, b);
 cout<<"\nArea of a rectangle is "<<perimeter(l, b);
 getch();
}
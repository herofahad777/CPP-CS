#include <iostream.h>
#include <conio.h>
//To find area and circumference of a circle.
//Formula Area = 3.14*r or 22/7*r
//Circumference = 2*3.14*r or 2*22/7*r
void main()
{
clrscr();
double a , c , r;

cout<<"Enter the radius \n";
cin>>r;

a=3.14*r;
c=2*3.14*r;

cout<<"Area = "<<a<<endl;
cout<<"Circumference = "<<c;
getch();
}
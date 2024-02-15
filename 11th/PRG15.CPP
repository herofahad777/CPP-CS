//To find maximum between 4 numbers using function.
#include <iostream.h>
#include <conio.h>

float max(float a, float b, float c, float d)
{
 if((a>b)&&(a>c)&&(a>d))
 return a;
 else if((b>c)&&(b>d))
 return b;
 else if(c>d)
 return c;
 else
 return d;
}

void main()
{
 clrscr();
 float a , b , c , d;
 cout<<"Enter four numbers\n";
 cin>>a>>b>>c>>d;
 cout<<"Maximum is "<<max(a,b,c,d);
 getch();
}
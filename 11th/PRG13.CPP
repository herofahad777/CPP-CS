//To print factorial of a number using function.
#include <iostream.h>
#include <conio.h>

void fact(int n)
{
  int f=1;
  for(int i=1;i<=n;i++)
  {
   f=f*i;
  }
  cout<<"Factorial of "<<n<<" is "<<f;
}

void main()
{
 clrscr();
 int no;
 cout<<"Enter a number\n";
 cin>>no;
 fact(no);
 getch();
}
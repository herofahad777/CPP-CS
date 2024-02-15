//To function overload
#include <iostream.h>
#include <conio.h>

int add(int a , int b)
{
return(a+b);
}
int add(int a , int b , int c)
{
return(a+b+c);
}
int add(int a , int b , int c ,int d)
{
return(a+b+c+d);
}

void main()
{
 clrscr();
 int a , b , c , d;
 cout<<"Enter four numbers\n";
 cin>>a>>b>>c>>d;
 cout<<"\nAdding two numbers, sum = "<<add(a,b);
 cout<<"\nAdding three numbers, sum = "<<add(a,b,c);
 cout<<"\nAdding four numbers, sum = "<<add(a,b,c,d);
 getch();
}
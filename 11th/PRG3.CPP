#include <iostream.h>
#include <conio.h>

void main()
{
double n1,n2,n3;

cout<<"Enter any three numbers"endl;
cin>>n1>>n2>>n3;

if(n1>n2 && n1>n3)
{
 cout<<"The maximum number is"<<n1;
}
else if(n2>n1 && n2>n3)
{
 cout<<"The maximum number is"<<n2;
}
else
{
 cout<<"The maximum number is"<<n3;
}
}


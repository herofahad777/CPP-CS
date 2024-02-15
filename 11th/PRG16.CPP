//To read and display array elements.
#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int a[5] , i;
 cout<<"Enter five numbers\n";
 for(i = 0;i < 5;i++)
 cin>>a[i];
 cout<<"Entered elements are";
 for(i = 0;i < 5;i++)
 cout<<"\n"<<a[i];
 getch();
}


//To find maximum integer in an array
#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int n[5] , max = 0 , i;
 cout<<"Enter 5 numbers\n";
 for(i = 0;i < 5;i++)
 cin>>n[i];
 for(i = 0;i < 5;i++)
 {
  if(max < n[i])
  max = n[i];
 }
 cout<<"The maximum is "<<max;
 getch();
}
//To find maximum integer in an array
#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int n[5] , max, i;
 cout<<"Enter 5 numbers\n";
 for(i = 0;i < 5;i++)
 cin>>n[i];

 max = n[0];
 for(i = 0;i < 5;i++)
 {
  if(max < n[i])
  max = n[i];
 }
 cout<<"The maximum is "<<max;
 getch();
}
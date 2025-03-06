//To sort an array using bubble sort
#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int a[5];
 cout<<"Enter five numbers\n";
 for(int i = 0;i < 5;i++)
 cin>>a[i];
 for(int i = 0;i < 5 - 1;i++)
 {
  for(int j = 0;j < 5 - i - 1;j++)
  {
   if(a[j] > a[j+1])
   {
    int temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
   }
  }
 }
 cout<<"Sorted array is";
 for(i = 0;i < 5;i++)
 cout<<"\n"<<a[i];
 getch();
}
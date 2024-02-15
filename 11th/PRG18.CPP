//To sort an array
#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int a[5] , i , y = 1, z = 0;
 cout<<"Enter five numbers\n";
 for(i = 0;i < 5;i++)
 cin>>a[i];
 for(y = 0;y < 5 - 1;y++)
 {
  for(z = 0;z < 5 - y - 1;z++)
  {
   if(a[z] > a[z+1])
   {
    int temp = a[z];
    a[z] = a[z+1];
    a[z+1] = temp;
   }
  }
 }
 cout<<"Sorted array is";
 for(i = 0;i < 5;i++)
 cout<<"\n"<<a[i];
 getch();
}
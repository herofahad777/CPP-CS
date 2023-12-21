//To print table of a number
#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int n , ans;

cout<<"Enter any number";
cin>>n;

for(int i = 1;i<=10;i++)
{
ans = n*i;
cout<<n<<"x"<<i<<"="<<ans<<endl;
}

getch();
}
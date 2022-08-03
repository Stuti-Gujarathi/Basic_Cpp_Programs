#include<iostream.h>
#include<conio.h>
void main()
{
int n;
clrscr();
cout<<”\n  Enter the year:”;
cin>>n;
if(n%4==0)
{
cout<<”Leap year”;
}
else
{
cout<<”Not leap year”;
}
getch();
}

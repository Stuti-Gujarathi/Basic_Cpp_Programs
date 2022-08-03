#include<iostream.h>
#include<conio.h>
void  main()
{
clrscr();
int arr[100],temp,I,size;
cout<<”Enter number of  elements:”;
cin>>size;
cout<<”Enter elements in array:”<<endl;
for(i=0;i<size;i++)
{
cin>>arr[i];
}
temp=(size+1)*(size+2)/2;
for(i=0;i<size;i++)
{
temp=temp-arr[i];
}
cout<<”Missing number is:”<<temp;
getch();
}

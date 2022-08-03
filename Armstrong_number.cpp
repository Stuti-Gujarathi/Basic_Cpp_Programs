#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,I,sum,digit,num;
clrscr();
cout<<”\n Enter the first number:”;
cin>>a;
cout<<”\n Enter the second number:”;
cin>>b;
cout<<”The armstrong number between two numbers are:”;
for(i=a; i<=b; i++)
{
sum=0;
num=I;
for(; num>0; num/=10)
{
digit=num%10;
sum=sum+digit*digit*digit;
}
if(sum==i)
{
cout<<”\n Armstrong number:”<<i;
}
}
getch();
} 

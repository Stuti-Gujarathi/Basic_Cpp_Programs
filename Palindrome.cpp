#include<iostream.h>
#include<conio.h>
void main()
{
int n,num,rev=0,digit;
clrscr();
cout<<”Enter the number:”;
cin>>num;
n=num;
do
{
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
}
while(num!=0)
cout<<”The  reverse of the number is:”<<rev<<endl;
if(n=rev)
{
cout<<”Number  is a palindrome”<<endl;
}
Else
{
cout<<”Number is not a palindrome”<<endl;
}
getch();
}

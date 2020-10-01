#include<iostream.h>
#include<conio.h>
int bin(int n)
{
if(n>=1)
{
bin(n/2);
cout<<n%2;
}
return(0);
}
int main()
{
clrscr();
int n;
cout<<"Enter number to be converted in binary form";
cin>>n;
cout<<"is binary form of enterd number"<<endl<<bin(n);
return(0);
}

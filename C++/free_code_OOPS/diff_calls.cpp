#include<iostream>
using namespace std;
void swap_value(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"\nValues after swapping by value in function call:"<<a<<"\t"<<b;
}
void swap_ref(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"\nValues after swapping by reference in function call:"<<a<<"\t"<<b;
}
void swap_address(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
cout<<"\nValues after swapping by value in function call:"<<*a<<"\t"<<*b;
}
int main()
{
int a1,a2,a3,b1,b2,b3;
cout<<"\nEnter two numbers:";
cin>>a1>>b1;
swap_value(a1,b1);
cout<<"\nValues after swapping by value in main function: "<<a1<<"\t"<<b1;
cout<<"\nEnter two numbers:";
cin>>a2>>b2;
swap_ref(a2,b2);
cout<<"\nValues after swapping by reference in main function: "<<a2<<"\t"<<b2;
cout<<"\nEnter two numbers:";
cin>>a3>>b3;
swap_address(&a3,&b3);
cout<<"\nValues after swapping by address in main function: "<<a3<<"\t"<<b3;
return 0;
}
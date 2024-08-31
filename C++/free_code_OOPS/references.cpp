/*reference is opposite of pointers, the reference variable takes a reference of the variable we decide to 
in other words we can also say that the reference variable is just another name for the variable it refers to
any change in the value of the original variable is reflected in the reference variable as well*/

#include<iostream>
using namespace std;
int main()
{
int a=200;
int b=a;
int &c=b;

cout<<"A VALUE IS :"<<a<<endl;
cout<<"B VALUE IS :"<<b<<endl;
cout<<"C VALUE IS :"<<c<<endl;

b=55;
cout<<"A VALUE IS :"<<a<<endl;
cout<<"B VALUE IS :"<<b<<endl;
cout<<"C VALUE IS :"<<c<<endl;
return 0;
}
#include<iostream>
using namespace std;
class statfunction
{
private:
int a,b;
static int count;
public:
statfunction(int x,int y)
{
a=x;
b=y;
count++;
}
static void display()
{
cout<<count;
}
};
int statfunction::count;
int main()
{

statfunction sf1(2,4);
statfunction sf2(5,10);
cout<<"no of times contructor called";
sf2.display();
cout<<"\n";
statfunction::display(); 
return 0;
}
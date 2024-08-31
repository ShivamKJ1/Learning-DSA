#include<iostream>
using namespace std;

class sample
{
private:
int rollno;
static int count;
public:
void getdata()
{
cout<<"enter the rollno";
cin>>rollno;
count++;
}
void show()
{
cout<<rollno<<endl;
cout<<count;
}
};
int sample::count; //static member initialization
int main()
{
sample sam;
sam.getdata();
sam.show();
return 0;
}
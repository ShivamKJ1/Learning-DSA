#include<iostream>
using namespace std;

class Demo{
    public:
    int a;

    void getdata(){
        cout<<"Enter a number "<<endl;
        cin>>a;
    }

    void put(){
        cout<<"Value :"<<a<<endl;
    }

    void operator+=(Demo ob){
        a=a+ob.a;
    }



};

int main(){
    Demo obj1,obj2,r1,r2;
    obj1.getdata();
    obj2.getdata();
    obj1.put();
    obj2.put();
    obj2+=obj1;
    obj1.put();
    obj2.put();

    return 0;
}
#include<iostream>
using namespace std;

class Complex{
    public:
    int a,b;

    void get(){
        cin>>a>>b;
    }

    Complex operator+(Complex obj){
        Complex temp;

        temp.a = a + obj.a;
        temp.b = b+ obj.b;

        return temp;
    }


    Complex operator-(Complex obj){
        Complex temp;

        temp.a = a - obj.a;
        temp.b = b - obj.b;

        return temp;
    }

    void display(){
        cout<<a<<" + "<<b<<"i"<<endl;

    }


};

int main(){
    Complex obj1,obj2,r1,r2;
    obj1.get();
    obj2.get();

    r1=obj1+obj2;
    r2=obj1-obj2;

    r1.display();
    r2.display();

    return 0;

}
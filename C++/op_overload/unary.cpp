#include<iostream>
using namespace std;

class Unary{
    public:
    int x;

    void getdata(){
        cout<<"Enter the value "<<endl;
        cin>>x;

    }

    void putdata(){
        cout<<"Value of x = "<<x<<endl;

    }

    void operator--(){  //only for prefix unary operator
        x=x-1;
    }

    void operator--(int){  // for postfix unary operator
       x=x-1;
    }
};

int main(){
    Unary obj1;
    obj1.getdata();
    cout<<"Original value \n";
    obj1.putdata();
    --obj1;
    obj1--;
    cout<<"Updated value\n";
    obj1.putdata();
    return 0;
}
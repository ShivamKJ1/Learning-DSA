#include<iostream>
using namespace std;

class Count{
    int value;
    public:

    Count(){
        value=5;
    }

    void operator ++(){   //this function works only when ++ is in prefix and doesnt work for postfix
                          //Notice the int inside the parentheses. It's the syntax used for using unary operators 
                          //as postfix; it's not a function parameter.
        ++value;
    }

    void display(){
        cout<<value<<endl;
    }
};

int main(){
    Count obj1,obj2,obj3,obj4;

    ++obj1;
    
    
    
    obj1.display();
    
    return 0;

}
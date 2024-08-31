#include<iostream>
using namespace std;

class Equality{
    public:
    int a;

    void getdata(){
        cout<<"Enter a number "<<endl;
        cin>>a;
    }

    
    void operator==(Equality ob) {
        if(a==ob.a){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }



};

int main(){
 Equality obj1,obj2,r1,r2;
    obj1.getdata();
    obj2.getdata();
    
    obj2==obj1;
    

    return 0;
}
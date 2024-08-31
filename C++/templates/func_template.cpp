#include<iostream>
using namespace std;

template <typename T>

T add(T a,T b){
    return (a+b);
}

int main(){
    cout<<add(5.6,91.44)<<endl;
    cout<<add(5,91)<<endl;
   // cout<<add(" Shivam "," Kumar ")<<endl;
    return 0;
}
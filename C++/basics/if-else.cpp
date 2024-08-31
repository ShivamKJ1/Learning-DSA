#include<iostream>
using namespace std;

int main(){
    int amt;
    cin>>amt;

    if (amt>5000){
        if (amt>10000)
        {
            cout<<"Roadtrip with neha "<<endl;
        }
        else
        {
            cout<<"shopping with neha "<<endl;
        }

    }
    else if(amt>2000)
    {
        cout<<"Rashmi"<<endl;

    }
    else{
        cout<<"Freinds "<<endl;

    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main (){
    float a,b,c;
    float max=0;

    cin>>a;  //cin>>a>>b>>c; we cn take 3 numbers input together
    
    cin>>b;
    cin>>c;

    if (a>b){
        if (a>c){
            max=a;
        }

    }

    else if(a>c){
        if(a>b){
            max=a;
        }
    }

    if (b>c){
        if (b>a){
            max=b;
        }

    }

    else if(b>a){
        if(b>c){
            max=b;
        }
    }
    if (c>b){
        if (c>a){
            max=c;
        }

    }

    else if(c>a){
        if(c>b){
            max=c;
        }
    }

    cout<<"The maximum number is "<<max<<endl;

    return 0;
}
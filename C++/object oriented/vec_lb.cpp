#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n1,n2,x,i,j,e,flag=0,pos;
    vector <int> v;
    cin>>n1;
    for(i=0;i<n1;i++){
        cin>>e;
        v.push_back(e);
    }
    
    cin>>n2;
    for(j=0;j<n2;j++){
        cin>>x;
        for(int k : v){
            if(x==k){
                flag=1;
                break;
            }
            else{
                flag=0;
            }
            
            
        }
        if(flag==1){
            pos=lower_bound(v.begin(), v.end(),x)-v.begin()+1;
            cout<<"Yes"<<" "<<pos<<"\n";
            
        }
        else{
            pos=lower_bound(v.begin(), v.end(),x)-v.begin()+1;
            cout<<"No"<<" "<<pos<<"\n";
            
        }
    }
    return 0;
}

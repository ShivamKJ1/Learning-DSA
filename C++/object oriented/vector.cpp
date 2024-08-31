#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,x,a,b,e;
    vector <int> v;
    
    cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>e;
        v.push_back(e);
    }
    
    cin>>x;
    //int k=x-1;
    cin>>a>>b;
    v.erase(v.begin()+x);
    v.erase(v.begin()+a,v.begin()+b);
    
    
    cout<<v.size()<<"\n";
    for(int j:v){
        cout<<j<<" ";
    }
    return 0;
}

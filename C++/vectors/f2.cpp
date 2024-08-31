#include<iostream>
#include<vector>
using namespace std;
//print vector using range based loop
int main(){
    vector<int>v1{1,2,3,4,5};

    
    for(auto x : v1){
        cout<<x<<endl;
        
    }
    return 0;
}
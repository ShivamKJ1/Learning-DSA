#include<iostream>
#include<vector>
using namespace std;
//print vector using for loop
int main(){
    vector<int>v1{1,2,3,4,5};

    int i;
    for(i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;

    }
    return 0;
}
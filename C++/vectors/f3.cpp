#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void fun(int num);

void fun(int num){
    cout<<num<<endl;
}

int main(){
   vector <int> v1{1,2,3,4,5};
   for_each(v1.begin(),v1.end,fun);
   return 0;
}
#include<iostream>
using namespace std;

int main(){

    int n,i;
    cin>>n;

    int sum=0;

    for(i=1;i<=n;i++){
        sum+=i;
    }

    cout<<"The sum upto the number "<<n<<" is "<<sum<<endl;

    return 0;
    
}
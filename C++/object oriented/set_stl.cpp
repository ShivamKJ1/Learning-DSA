#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    int c;
    string x;
    int y;
    map<string,int> m;
    cin>>c>>x>>y;
    switch(c){
        case 1:
            m.insert(make_pair(x,y));
            break;
        case 2:
            m.erase(x);
            break;
        case 3:
            if(m[x]!=0){
                cout<<m[x]<<"\n";
            }
            else{
                cout<<"0\n";
            }
            break;
          
    }
    return 0;
}




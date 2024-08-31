#include<iostream>
using namespace std;

struct bill{
    int sno;
    char item_name[20];
    int quantity;
    int price;

};
int main(){
    int i;
    struct bill cust[2];
    for(i=0;i<2;i++){
        cin>>cust[i].sno;
        cin>>cust[i].item_name;
        cin>>cust[i].quantity;
        cin>>cust[i].price;
        
    }

    cout<<"sno. "<<"item name  "<<"quantity  "<<"price\n";
    for(i=0;i<2;i++){
        cout<<cust[i].sno<<"\t";
        cout<<cust[i].item_name<<"\t";
        cout<<cust[i].quantity<<"\t";
        cout<<cust[i].price<<endl;
        
    }

    cout<<"\t\t"<<"Total\t"<<cust[0].price+cust[1].price;
    return 0;
}
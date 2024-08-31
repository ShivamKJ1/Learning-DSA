#include<iostream>
using namespace std;

class Courier{
    public:
    int CourierID;
    string CourierName;

    public:
    void PrintBill(double Base_fare){
        cout<<"Courier ID : "<<CourierID<<endl;
        cout<<"Courier Name : "<<CourierName<<endl;
        cout<<"Shipping cost : "<<Base_fare+30<<endl;

    }
};

class International_Services:public Courier{
    public:
    string Destination;
    float weight;

    public:
    void FinalBill(double Base_fare){
        double k=Base_fare*weight;
        cout<<"Total shipping cost : "<<Base_fare*weight<<endl;
        if(k>100){cout<<"More Sale"<<endl;}
        else{cout<<"Less Sale"<<endl;}
    }


};

int main(){
    double bf;
    cout<<"Enter the base fare amount : "<<endl;
    cin>>bf;

    International_Services obj;

    cout<<"Enter Courier ID :"<<endl;
    cin>>obj.CourierID;

    cout<<"Enter Courier Name :"<<endl;
    cin>>obj.CourierName;

    cout<<"Enter destination :"<<endl;
    cin>>obj.Destination;

    cout<<"Enter weight of luggage :"<<endl;
    cin>>obj.weight;

    obj.PrintBill(bf);
    obj.FinalBill(bf);



    return 0;

}
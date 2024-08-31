#include<iostream>
using namespace std;

class Courier{
    public:

    int CourierID;
    string Name_of_Courier;
    double Base_Fare;
    void PrintBill(){
        
        cout<<"Enter Courier ID "<<endl;
        cin>>CourierID;

        cout<<"Enter Name of Courier "<<endl;
        cin.ignore();
        getline(cin,Name_of_Courier);

        cout<<"Enter the Base Fare"<<endl;
        cin>>Base_Fare;

    }
};

class International_Services: public Courier{
    public:

    string Destination;
    double weight;

    void Final_Bill(){
        cout<<"Enter The weight of the package "<<endl;
        cin>>weight;

        cout<<"Enter the Destination of the package "<<endl;
        cin.ignore();
        getline(cin,Destination);


        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Output :"<<endl;

        cout<<"Courier ID : "<<CourierID<<endl;
        cout<<"Name of Courier : "<<Name_of_Courier<<endl;
        cout<<"The Shipping Cost : "<<Base_Fare+30<<endl;
        cout<<"Total Shipping Cost : "<<Base_Fare*weight<<endl;


        if((Base_Fare*weight)>100)
        {cout<<"More Sale "<<endl;}

        else {cout<<"Less Sale "<<endl;}
    }
};

int main(){
    International_Services obj;

    obj.PrintBill();
    obj.Final_Bill();

    return 0;

}
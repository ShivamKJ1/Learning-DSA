#include<iostream>
using namespace std;

class Employee{
    public:

    void emp(int basic, int hra, int da){
        cout<<"Gross Salary of regular employee : "<<basic+hra+da<<endl;
    }

    void emp(int wage, int hours){
        cout<<"Gross salary of daily wage employee : "<<wage*hours<<endl;

    }

    void emp(int pay){
        cout<<"Gross salary of consolidated pay employee : "<<pay<<endl;

    }
};

int main(){

    Employee e1;

    e1.emp(20000,9287,2850);
    e1.emp(100,7);
    e1.emp(20000);
    return 0;
}
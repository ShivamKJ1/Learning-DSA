#include<iostream>
using namespace std;

class Car{
    public:
    string make;
    string model;
    int year;

};

int main(){
    Car c1;
    c1.make="Toyota";
    c1.model="Camry";
    c1.year=2022;

    cout<<"Make :"<<c1.make<<"  Model : "<<c1.model<<" Year : "<<c1.year<<endl;

    
}
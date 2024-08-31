#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    string company;
    int age;

    public:
    void setName(string n){
        name=n;
    }
    string getName(){
        //cout<<name;
        return name;
       
    }

    void setC(string c){
        company=c;
    }
    string getC(){
         //cout<<company;
        return company;
        
    }

    void setAge(int a){
        age=a;
    }
    int getAge(){ //cout<<age;

        return age;

    }

    
};

int main(){
    Employee e1;
    e1.setName("Shivam");
    e1.setC("JP Morgan");
    e1.setAge(23);

    cout<<e1.getName()<<endl;
    cout<<e1.getC()<<endl;
    cout<<e1.getAge()<<endl;

    return 0;
}
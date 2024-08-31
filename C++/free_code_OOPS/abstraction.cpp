//encapsulation and abstraction are alomost similar

#include<iostream>
using namespace std;
class AbstractEmployee{
    virtual void AskForProm()=0;

};
class Employee : AbstractEmployee{
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
    virtual void AskForProm(){
        if(age>30){
            cout<<name<<" got promoted"<<endl;
        }
        else{
            cout<<name<<" Sorry, no promotion for you"<<endl;
        }
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

    e1.AskForProm();

    return 0;
}
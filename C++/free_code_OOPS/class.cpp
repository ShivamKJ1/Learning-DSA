#include<iostream>

#include <string.h>
using namespace std;

class Employee{ //user defined data type whose name is Employee
public:
    string name;
    string company;
    int age;

    void intro_urself(){
        cout<<"Name :"<<name<<endl;
        cout<<"Company :"<<company<<endl;
        cout<<"Age :"<<age<<endl;
    }
    //private:
    Employee(){
        name="...data not found...";
        company="...data not found...";
        age=-1;
    }
    Employee(string s, string c, int a){
        name=s;
        company=c;
        age=a;
    }
};

int main(){
    
    Employee e1=Employee();
    Employee e2=Employee("Shivam Kumar","Google",23);
    
    //cout<<"Enter the name\n";
    //getline(cin,e1.name);
    //cout<<e1.name<<"\n";

    //cout<<"Enter name of company\n";
    //getline(cin,e1.company);
    //cout<<e1.company<<"\n";

    //cout<<"Enter the age of employee \n";
    //cin>>e1.age;
    //cout<<e1.age;

    e1.intro_urself();
    e2.intro_urself();
    //int stores garbage default values 
    

    return 0;
}
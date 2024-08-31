#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public:

    void set_values(string s,int n){
        if(s!="$" && n>0){
        name=s;
        age=n;
        }

        else{
            cout<<"Invalid\n";
        }
    }

    string get_name(){
        return name;
    }

    int get_age(){
        return age;
    }
    

};

int main(){
    Person p1;

    p1.set_values("Shivam Kumar Jaiswal",25);
    cout<<"Name :"<<p1.get_name()<<"\n"<<"Age :"<<p1.get_age()<<endl;




    
    return 0;

}
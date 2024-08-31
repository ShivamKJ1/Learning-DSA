
#include<iostream>
#include<string.h>
using namespace std;

class Employee{
  private:
  
  int id_num;
  char name[100];
  float sal;

  public:
  void getval(){

    cout<<"Enter name of employee"<<endl;
    //getline(cin,name);

    cin>>name;
    



    cout<<"Enter the id number of employee"<<endl;
    cin>>id_num;

    

    cout<<"Enter the current salary of the employee"<<endl;
    cin>>sal;


  }

  void printdetails(){
    cout<<"Employee name : "<<name<<endl;
    cout<<"Employee ID : "<<id_num<<endl;
    cout<<"New Salary : "<<sal*1.1<<endl;

  }


};

int main(){
  int n,i;

  cout<<"Enter the number of employees "<<endl;
  cin>>n;

  Employee obj[n];

  

  for(i=0;i<n;i++){
    obj[i].getval();
    
  }

  cout<<"Employee Details "<<endl;

  for(i=0;i<n;i++){
    obj[i].printdetails();
    
  }

  return 0;
}
#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int id;

    public:
        void getstu(){
            cout<<"Enter name of student "<<endl;
            getline(cin,name);
            cout<<"Enter ID number of the student"<<endl;
            cin>>id;
            
        }

        void putstu(){
            cout<<"ID : "<<id<<endl;
            cout<<"NAME : "<<name<<endl;

        }
};

class Marks:public Student {
    private:
    int m1,m2,m3;

    public:
    void getmarks(int n1,int n2,int n3){
        m1=n1;
        m2=n2;
        m3=n3;
    }

    void putmarks(){
        cout<<"Marks 1 : "<<m1<<endl;
        cout<<"Marks 2 : "<<m2<<endl;
        cout<<"Marks 3 : "<<m3<<endl;
    }
};

class Result:public Marks{
    private:
    int total;
    float avg;

    public:
    void agg(int s1,int s2,int s3){
        total=s1+s2+s3;
        avg=total/3;
    }

    void show(){
        cout<<"The total is : "<<total<<endl;
        cout<<"The average is : "<<avg<<endl;
    }
    
};

int main(){
    Student S1;
    S1.getstu();
    //S1.putstu();

    int p,q,r;
    cout<<"Enter marks of 3 subjects"<<endl;
    cin>>p>>q>>r;

    Marks M;
    M.getmarks(p,q,r);

    Result R;
    R.agg(p,q,r);


    S1.putstu();
    M.putmarks();
    R.show();

    return 0;
}
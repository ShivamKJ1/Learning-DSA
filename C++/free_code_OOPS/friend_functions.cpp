#include<iostream>
using namespace std;
//Friendship in programming is not mutual
//friendship is not inherited
class EquilateralTriangle{
    private:

    float a;
    float circumference;
    float area;

    public:
    
    void setA(float length){
        a=length;
        circumference=3*a;
        area=(1.73*a*a)/4;
        

    }

    friend class Homework;
    };

class Homework{

public:
void PrintResults(EquilateralTriangle et){
    cout<<"circumference = "<<et.circumference<<endl;
    cout<<"area = "<<et.area<<endl;
}
};

int main(){
    EquilateralTriangle et;
    et.setA(3);

    Homework h;
    h.PrintResults(et);
    
    return 0;
}



/*there are two solutions here if we dont want to use
friend concept is:
1. make the variables public
2. make a public getter function

the problem with these 2 solutions are is that the member
is then available to all

in a friend function we pass the objects of the class 
with which it is friends with as parameters
*/


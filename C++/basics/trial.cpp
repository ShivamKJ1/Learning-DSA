#include <iostream>
using namespace std;
class Time
{
public:
int h,m,s;
void getTime()
{
cout<<"\nEnter hours,minutes and seconds:";
cin>>h>>m>>s;
}
void putTime()
{
cout<<"time is:"<<h<<":"<<m<<":"<<s;
}
void addTime(Time T1,Time T2)
{
this->s=T1.s+T2.s;
this->m=T1.m+T2.m + this->s/60;;
this->h= T1.h+T2.h + (this->m/60);
this->m %=60;
this->s %=60;
}
};
int main()
{
Time T1,T2,T3;
T1.getTime();
T2.getTime();
T3.addTime(T1,T2);
T3.putTime();
return 0;}
#include<iostream>
using namespace std;

int main()
{
int time1,time2;
cin>>time1>>time2;
int hour1=time1/100;
int hour2=time2/100;
int min1=time1%100;
int min2=time2%100;
int total1=hour1*60+min1;
int total2=hour2*60+min2;
int diff=total2-total1;
int hour=diff/60;
int min=diff%60;
cout<<hour<<" hrs "<<min<<" mins"<<endl;
return 0;
}

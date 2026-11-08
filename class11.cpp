#include<iostream>
using namespace std;

int main()
{
int num,x,y,numDevo;
cin>>num;
x=num%10;
y=num/10%10;
numDevo=x*10+y;
cout<<numDevo<<endl;
return 0;
}
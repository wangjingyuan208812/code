#include<iostream>
using namespace std;

int main()
{
int a,x1,x2,x3,x4,b;
cin>>a;
x1=a%10;
x2=a/10%10;
x3=a/100%10;
x4=a/1000%10;
x1=(x1+9)%10;
x2=(x2+9)%10;
x3=(x3+9)%10;
x4=(x4+9)%10;
b=x1*100+x3+x2*1000+x4*10;
cout<<b;
return 0;




}
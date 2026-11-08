#include<iostream>
using namespace std;
#include<cmath>
int main()
{
double a,b,c,d,x1,x2,jp,ip;
cin>>a>>b>>c;
d=b*b-4*a*c;
if(d==0)
{
x1=x2=-b/(2*a);
cout<<"has two equal roots:"<<endl;
cout<<"x1=x2="<<x1<<endl;
}
else if(d>0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
cout<<"has two real roots:"<<endl;
cout<<"x1="<<x1<<",";
cout<<"x2="<<x2<<endl;
}
else
{
jp=-b/(2*a);
ip=sqrt(-d)/(2*a);
cout<<"has two complex roots:"<<endl;
cout<<"x1="<<jp<<"+"<<ip<<"i"<<endl;
cout<<"x2="<<jp<<"-"<<ip<<"i"<<endl;
}
return 0;

}
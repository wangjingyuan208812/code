#include<iostream>
using namespace std;

int main()
{
int x;
cin>>x;
int x1=x%10;
int x2=x/10%10;
int x3=x/100%10;
int x4=x1*x1*x1+x2*x2*x2+x3*x3*x3;
if (x==x4)
   {
    cout<<"yes"<<endl;
   }
else
    {
    cout<<"no"<<endl;
    }
return 0;
}
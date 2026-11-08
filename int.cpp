#include<iostream>
using namespace std;

int main()
{
int x,x1,x2,x3,x4,x5;
cin>>x;
if(x>99999)
{
    cout<<"a bad number"<<endl;
}
else
{
x1=x%10;
x2=x/10%10;
x3=x/100%10;
x4=x/1000%10;
x5=x/10000%10;
if(x5)
{
    cout<<"10000:"<<x5<<" ";
}
if(x4)
{
    cout<<"1000:"<<x4<<" ";
}
if(x3)
{
    cout<<"100:"<<x3<<" ";
}
if(x2)
{
    cout<<"10:"<<x2<<" ";
}
if(x1)
{
    cout<<"1:"<<x1<<" ";
}
}






return 0;

}
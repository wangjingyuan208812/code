#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
if(a%400==0||(a%4==0&&a%100!=0))
{
switch(b)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    cout<<"31"<<endl;
    break;
case 2:
    cout<<"29"<<endl;
    break;
case 4:
case 6:
case 9:
case 11:
    cout<<"30"<<endl;
    break;
}
}
else
{
    switch(b)
    {
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    cout<<"31"<<endl;
    break;
case 2:
    cout<<"28"<<endl;
    break;
case 4:
case 6: 
case 9:
case 11:
    cout<<"30"<<endl;
    break;
    }
}
return 0;
}
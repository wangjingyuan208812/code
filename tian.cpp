#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cin>>a>>b>>c;
if(a%400==0||(a%4==0&&a%100!=0))
{
switch(b)
{
case 1:
cout<<c<<endl;
break;
case 2:
cout<<c+31<<endl;
break;
case 3:
cout<<c+60<<endl;
break;
case 4:
cout<<c+91<<endl;
break;
case 5:
cout<<c+121<<endl;
break;
case 6:
cout<<c+152<<endl;
break;
case 7:
cout<<c+182<<endl;
break;
case 8:
cout<<c+213<<endl;
break;
case 9:
cout<<c+244<<endl;
break;
case 10:
cout<<c+274<<endl;
break;
case 11:
cout<<c+305<<endl;
break;
case 12:
cout<<c+335<<endl;
break;
}
}
else
{
switch(b)
{
case 1:
cout<<c<<endl;
break;
case 2:
cout<<c+31<<endl;
break;
case 3:
cout<<c+59<<endl;
break;
case 4:
cout<<c+90<<endl;
break;
case 5:
cout<<c+120<<endl;
break;
case 6:
cout<<c+151<<endl;
break;
case 7:
cout<<c+181<<endl;
break;
case 8:
cout<<c+212<<endl;
break;
case 9:
cout<<c+243<<endl;
break;
case 10:
cout<<c+273<<endl;
break;
case 11:
cout<<c+304<<endl;
break;
case 12:
cout<<c+334<<endl;
break;
}
return 0;



}







}








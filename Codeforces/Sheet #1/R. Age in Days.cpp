#include <iostream>
using namespace std;
int main()
{
long long age;
cin>>age;
int day=0,month=0,year=0;
if(age/365 >0){
    year=age/365 ;
    age%=365 ;
    }
if(age/30>0){
    month=age/30;
    age%=30;
}
day=age;
cout<<year<<" years"<<endl;
cout<<month<<" months"<<endl;
cout<<day<<" days";
return 0;
}
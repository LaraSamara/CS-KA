#include <iostream>
using namespace std;
int main()
{
int number;
cin>>number;
int digit;
while(number){
    digit=number%10;
    number=number/10;
}
if(digit%2==0){
    cout<<"EVEN";
}else{
    cout<<"ODD";
}
return 0;
}
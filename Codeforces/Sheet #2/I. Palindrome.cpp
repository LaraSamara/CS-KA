#include <iostream>
using namespace std;
int main()
{
int number;
cin>>number;
int temp=number;
int reverse=0;
while(number){
    reverse*=10;
    reverse=reverse+(number%10);
    number/=10;
}
cout<<reverse<<endl;
if(temp==reverse){
cout<<"YES";
}else{
    cout<<"NO";
}
    return 0;
}
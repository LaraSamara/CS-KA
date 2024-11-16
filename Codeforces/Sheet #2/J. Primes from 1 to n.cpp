#include <iostream>
using namespace std;
int main()
{
int number;
cin>>number;
bool prime=true;
int j=2;
while(j<=number){
    for(int i=2;i<j;i++){
        if(j%i==0){
            prime=false;
            break;
        }
    }
    if(prime==true){
        cout<<j<<" ";
    }
    j++;
    prime=true;
}
    return 0;
}
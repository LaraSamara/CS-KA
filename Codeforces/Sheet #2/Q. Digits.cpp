#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int number;
        cin>>number;
        if(number==0){
            cout<<0<<" ";
        }else{
        while(number){
            cout<<number%10<<" ";
            number/=10;
        }
        }
        cout<<endl;
        
    }
return 0;
}
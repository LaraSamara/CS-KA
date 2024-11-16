#include <iostream>
using namespace std;
int main()
{
int a,b,c=0;
cin>>a>>b;
for(int i=a;i<=b;i++){
        bool lucky=true;
        int temp=i;
    while(temp){
        if(temp%10!=7 && temp%10!=4){
                lucky=false;
        }
        temp/=10;
    }
    if(lucky==true){
        cout<<i<<" ";
        c++;
    }
}
if(!c){
    cout<<-1;
}
    return 0;
}
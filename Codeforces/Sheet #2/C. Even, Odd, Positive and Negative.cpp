#include <iostream>
using namespace std;
int main()
{
        int n, evenCounter=0, oddCounter=0, positiveCounter=0, negativeCounter=0;
        cin>>n;
        for(int i=1;i<=n;i++){
                int number;
        cin>>number;
        if(number%2==0){
            evenCounter++;
        }else{
        oddCounter++;
        }
        if(number>0){
            positiveCounter++;
        }else if(number<0){
        negativeCounter++;
        }
        }
cout<<"Even: "<<evenCounter<<endl;
cout<<"Odd: "<<oddCounter<<endl;
cout<<"Positive: "<<positiveCounter<<endl;
cout<<"Negative: "<<negativeCounter<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int c;
    cin>>c;
    long long factorial=1;
    while(c--){
            int number;
            cin>>number;
            if(number==0||number==1){
                factorial=1;
            }else{
        for(int j=1;j<=number;j++){
            factorial*=j;
        }
            }
            cout<<factorial<<endl;
            factorial=1;
    }
 
    return 0;
}
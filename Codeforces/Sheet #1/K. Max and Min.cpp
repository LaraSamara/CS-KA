#include <iostream>
using namespace std;
int main()
{long long x,y,z;
cin>>x>>y>>z;
long long max,min;
if(x>=y && x>=z){
    max=x;
    if(y>=z){
        min=z;
    }else{
        min=y;
    }
}else if(y>=x && y>=z){
    max=y;
    if(x>=z){
        min=z;
    }else{
        min=x;
    }
}else{
    max=z;
if(x>=y){
    min=y;
} else{
    min=x;
}
}
cout<<min<<" "<<max;
return 0;
}
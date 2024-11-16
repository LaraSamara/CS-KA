#include <iostream>
using namespace std;
int main()
{
long long a,b;
char s;
cin>>a>>s>>b;
if(s=='+'){
    cout<<a+b;
}else if(s=='-'){
    cout<<a-b;
}else if(s=='*'){
    cout<<a*b;
}else{
    cout<<a/b;
}
return 0;
}
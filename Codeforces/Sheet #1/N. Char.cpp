#include <iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
if(c>='a'&&c<='z'){
        c=(char)(c-32);
    }
    else if(c>='A'&& c<='Z'){
        c=(char)(c+32);
    }
    cout<<c;
return 0;
}
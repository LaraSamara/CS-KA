#include <iostream>
using namespace std;
int main()
{
    string name1,name2;
    getline(cin,name1);
    getline(cin,name2);
    name1=name1.substr(name1.find_first_of(' ')+1);
    name2=name2.substr(name2.find_first_of(' ')+1);
    if(name1.compare(name2)==0){
        cout<<"ARE Brothers";
    }else{
        cout<<"NOT";
    }
return 0;
}
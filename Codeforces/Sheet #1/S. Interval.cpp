#include <iostream>
using namespace std;
int main()
{
double number;
cin>>number;
if(number>=0 && number<=25){
    cout<<"Interval [0,25]";
}else if(number>25 && number<=50){
    cout<<"Interval (25,50]";
}else if(number>50 && number<=75){
    cout<<"Interval (50,75]";
}else if(number>75 && number<=100){
    cout<<"Interval (75,100]";
}else{
    cout<<"Out of Intervals";
}
return 0;
}
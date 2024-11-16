/*
Create class Time which contains:
- hour (int)
- min (int)
- sec (int)
- Default & parameterized constructors
- Setters & getters for each attribute
- Overload ++ (prefix operator) which increase seconds by 1 .
o You should handle all cases correctly , E.g. :
o If time is (23:59:59) it will be (0,0,0)
- Overload -- (prefix operator) which decrease seconds by 1 .
o You should handle all cases correctly , E.g. :
o If time is (0,0,0) it will be (23:59:59)
- Overload << to print Time as following format :
o Hour:min:sec
o E.g. 10:55:30
- Your main should be as follow :
Time t(0,0,0);
--t;
cout<<t;
++t;
cout<<t;
- output :
23:59:59
0:0:0
*/
#include <iostream>
using namespace std;
class Time{
private:
    int hour,min,sec;
public:
    friend ostream& operator<<(ostream& out,Time t);
    //constructors
    Time(){
        hour=0;
        min=0;
        sec=0;
    }
    Time(int h,int m,int s){
        hour=h;
        min=m;
        sec=s;
    }
    //setters
    void set_hour(int h){
    hour=h;
    }
    void set_min(int m){
        min=m;
    }
    void set_sec(int s){
    sec=s;
    }
    //getters
    int get_hour(){
    return hour;
    }
    int get_min(){
    return min;
    }
    int get_sec(){
    return sec;
    }
    //overloading
    Time operator++(){
        if(this->sec==59){
            this->sec=0;
        }else{
        this->sec+=1;
        }
        if(this->min==59){
            this->min=0;
        }else{
            this->min+=1;
        }
        if(this->hour==23){
            this->hour=0;
        }else{
            this->hour+=1;
        }
        return *this;
    }
        Time operator--(){
        if(this->sec==0){
            this->sec=59;
        }else{
        this->sec-=1;
        }
        if(this->min==0){
            this->min=59;
        }else{
            this->min-=1;
        }
        if(this->hour==0){
            this->hour=23;
        }else{
            this->hour-=1;
        }
        return *this;
    }
};

ostream& operator<<(ostream& out,Time t){
    out<<t.hour<<":"<<t.min<<":"<<t.sec<<endl;
    return out;
}
int main()
{
    Time t(0,0,0);
    --t;
    cout<<t;
    ++t;
    cout<<t;
    return 0;
}
/*
Create class Student which contains:
- avg (int)
- name (string)
- Default & parameterized constructors
- Create a Custom Exception Class called AvgException which checks in the
Student Constructor the value of the avg
o will throw an exception if avg is <= -1
- Create another Custom Exception Class called NameException which checks
in the Student Constructor the value of the name
o will throw an exception if name length > 15
- in main try to create object of class Student , your code should catch any
exceptions and print exception message .
*/
#include <iostream>
#include<exception>
using namespace std;
class AvgException:public exception{
public:
    const char* what()const throw(){
        return "negative average\n";
    }
};
class NameException:public exception{
public:
    const char* what()const throw(){
        return " name length is more than 15\n";
    }
};
class Student{
private:
    int avg;
    string name;
public:
    //constructors
    Student(){
        avg=0;
        name="";
    }
    Student(int avg,string name){
        if(name.length()>15){
            throw new NameException();
        }
        if(avg <=-1){
            throw new AvgException();
        }
        this->name=name;
        this->avg=avg;
    }

};
int main()
{
    try{
        Student s(-10,"lara yousef khalil samara");
    }catch(exception *e){
        cout<<e->what();
    }
    return 0;
}
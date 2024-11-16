/*
Create class Student that contains the following :
// attributes
- Id
- Name
- Marks[5]
// methods
- Default constructor
- Parameterized constructor => Student(int i,string n)
- setId , getId
- setName . getName
- read_marks() => method that read 5 numbers from users and then
store each number in marks array => read student marks
- printInfo() => method print student’s information ( id and name ang
avg)
- calc_avg() => method that calc student avg and return it
*/
/*
Define function get_max() , pass your array of objects to the function ,
and return the student that has maximum gpa .

In main :
● Define an array of 3 elements of type Student .
● Ask the user to enter their information .
● Print information for the student that has a maximum gpa .
*/
#include <iostream>
using namespace std;
class Student{
private:
    int id;
    string name;
    int marks[5];
public:
    Student(){
        id=0;
        name="";
    }
    Student(int i,string n){
        id=i;
        name=n;
    }
    void set_id(int i){
        id=i;
    }
    int get_id(){
    return id;
    }
    void set_name(string n){
        name=n;
    }
    string get_name(){
    return name;
    }
    void read_marks(){
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void printInfo(){
        cout<<"id is: "<<id<<endl;
        cout<<"name is: "<<name<<endl;
        cout<<"average is: "<<calc_avg()<<endl;
    }
    float calc_avg(){
        float avg=0.0;
        for(int i=0;i<5;i++){
        avg+=marks[i];
        }
        avg/=5;
    return avg;
    }
};
    Student get_max(Student student[],int size){
        float max=0;
        Student maximum;
        for(int i=0;i<size;i++){
            if(student[i].calc_avg()>max){
                max=student[i].calc_avg();
                maximum=student[i];
            }
        }
        return maximum;
    }

int main(){

Student s1(1,"lara");
Student s2(2,"mais");
Student s3(3,"sali");
s1.read_marks();
cout<<"\n==================\n";
s2.read_marks();
cout<<"\n==================\n";
s3.read_marks();
cout<<"\n==================\n";
Student arr[3]={s1,s2,s3};
Student max=get_max(arr,3);
max.printInfo();
    return 0;
}
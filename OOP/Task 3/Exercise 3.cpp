/*
Create class Computer which contains:
- id (int)
- Default & parameterized constructors
- virtual void shortForm() = 0;
- virtual void famousFor() = 0;
- Create class Laptop which inherits from Computer and override all
methods
- Create class Desktop Laptop which inherits from Computer and
override all methods
- Create class supercomputer which inherits from Computer and
override all methods
- In main :
o Create an object from each class and define only one pointer to
point to them in order , call all methods for each object , then delete
it .
- Output :
laptop is LP
It is Famous for its Portability
---------------------
Desktop is DK
It is famous for its Flexibility
---------------------
SuperComputer is SC
It is Famous for its Speed
---------------------
*/
#include <iostream>
using namespace std;
class Computer{
protected:
    int id;
public:
    //constructors
    Computer(){
        id=0;
    }
    Computer(int id){
        this->id=id;
    }
    //setters
    void set_id(int id){
    this->id=id;
    }
    //getters
    int get_id(){
    return id;
    }
    virtual void shortForm() = 0;
    virtual void famousFor() = 0;
    ~Computer(){
        cout<<"\n---------------------\n";
    }
};
class Laptop: public Computer{
public:
    //overriding
    void shortForm(){
        cout<<"laptop is LP"<<endl;
    }
    void famousFor(){
        cout<<"It is Famous for its Portability"<<endl;
    }
};
class Desktop:public Computer{
public:
    //overriding
    void shortForm(){
        cout<<"Desktop is DK"<<endl;
    }
    void famousFor(){
        cout<<"It is famous for its Flexibility"<<endl;
    }
};
class supercomputer:public Computer{
public:
    void shortForm(){
        cout<<"SuperComputer is SC"<<endl;
    }
    void famousFor(){
        cout<<"It is Famous for its Speed"<<endl;
    }
};
int main()
{
    Computer *c=new Laptop();
    c->shortForm();
    c->famousFor();
    delete c;
    c=nullptr;
    c=new Desktop();
    c->shortForm();
    c->famousFor();
    delete c;
    c=nullptr;
    c=new supercomputer();
    c->shortForm();
    c->famousFor();
    delete c;
    c=nullptr;
    return 0;
}
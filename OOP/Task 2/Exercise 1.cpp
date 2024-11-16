/*
Create class Vehicle which contains:
- Model ( string )
- Reg_number ( string )
- Speed (int)
- Fule_capacity (double)
- Fule_consumption (double)
- Default & parameterized constructors
- Setters & getters
- Double fuelNeeded(int dis) => method that will take distance then calculate
the amount of fuel that will be needed for that distance as follow :
(fuelNeeded = fuelConsumption * distance).
- double distanceCovered(int hours) => method that will take time (in hours)
as an argument and calculate the distance for the given number of hours as
follow : (distance = vehicleSpeed * hours)
- display method that will display vehicle information .

Create class Truck which inherits from Vehicle class and contains
following attributes :
- cargo_weight_limit ( int )
- Default & parameterized constructors
- A display() method which will call parent display() to print Truck
information , and it will print cago_weight_limit with other Truck
information's .

Create class Bus which inherits from Vehicle class and contains following
attributes
- Number_of_passengers ( int )
- Default & parameterized constructors
- A display() method which will call parent display() to print Bus information ,
and it will print Number_of_passengers with other Bus information's .

In main :
- Create 3 objects – object of each class , then print each object information .
*/
#include <iostream>
using namespace std;
class Vehicle{
protected:
    string model;
    string Reg_number;
    int speed;
    double Fule_capacity;
    double Fule_consumption;
public:
    Vehicle(){
        model="";
        Reg_number="";
        speed=0;
        Fule_capacity=0.0;
        Fule_consumption=0.0;
    }
    Vehicle(string m, string r, int s,double capacity , double consumption){
        model=m;
        Reg_number=r;
        speed=s;
        Fule_capacity=capacity;
        Fule_consumption=consumption;
    }
    void set_model(string m){
        model=m;
    }
    void set_Reg_number(string r){
        Reg_number=r;
    }
    void set_speed(int s){
        speed=s;
    }
    void set_Fule_capacity(double capacity){
        Fule_capacity=capacity;
    }
    void set_Fule_consumption(double consumption){
        Fule_consumption=consumption;
    }
    string get_model(){
        return model;
    }
    string get_Reg_number(){
        return Reg_number;
    }
    int get_speed(){
        return speed;
    }
    double get_Fule_capacity(){
        return Fule_capacity;
    }
    double get_Fule_consumption(){
        return Fule_consumption;
    }
    double fuelNeeded(int dis){
      double fuelNeeded = Fule_consumption * dis;
      return fuelNeeded;
    }
    double distanceCovered(int hours){
        double distance = speed * hours;
        return distance;
    }
    void display(){
        cout<<"model is: "<<model<<endl;
        cout<<"Reg number: "<<Reg_number<<endl;
        cout<<"speed is: "<<speed<<endl;
        cout<<"fule capacity is: "<<Fule_capacity<<endl;
        cout<<"fule consumption: "<<Fule_consumption<<endl;
    }
};
class Truck:public Vehicle{
private:
    int cargo_weight_limit;
public:
    Truck(){
        cargo_weight_limit=0.0;
    }
    Truck(string m, string r, int s,double capacity , double consumption,int c):Vehicle(m,r,s,capacity,consumption){
        cargo_weight_limit=c;
    }
    void display(){
        Vehicle::display();
    cout<<"cargo weight limit is: "<<cargo_weight_limit<<endl;
    }
};
class Bus:public Vehicle{
private:
    int Number_of_passengers;
public:
    Bus(){
        int Number_of_passengers=0;
    }
    Bus(string m, string r, int s,double capacity , double consumption, int p):Vehicle(m,r,s,capacity,consumption){
        Number_of_passengers=p;
    }
    void display(){
        Vehicle::display();
        cout<<"number of passengers is: "<<Number_of_passengers<<endl;
    }
};

int main(){
    Vehicle v("BMW","123la",60,77,88.8);
    v.display();
    cout<<"\n==================================\n";
    Truck t("BMW","9860la",40,100,99.9,200);
    t.display();
    cout<<"\n==================================\n";
    Bus b("marceds","78790m",80,120,89,50);
    b.display();

    return 0;
}
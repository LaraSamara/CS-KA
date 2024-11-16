/*
- Create class Point , with the following members : x , y ( integers
value)
- It will contains ( int x , int y) => attributes
- Constructors
- Setters and getters
- Create class Circle that consist of following attributes and methods :
- Center ( point )
- Radius ( double )
// methods
- Constructors
- Setters and getters
- calcArea() => method calc area of circle and return it
*/
/*
In main :
● Define 2 variables named circle1,circle2 of type Circle then copy
contents of circle1 to circle2 and print its area .
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Point{
private:
    int x,y;
public :
    Point(){
    x=0;
    y=0;
    }
    Point(int x1,int y1){
        x=x1;
        y=y1;
    }
    void set_x(int x1){
    x=x1;
    }
    void set_y(int y1){
        y=y1;
    }
    int get_x(){
    return x;
    }
    int get_y(){
    return y;
    }
};
class Circle{
private:
    Point center;
    double radius;
public:
    Circle(){
    radius=0.0;
    }
    Circle(double r,Point c){
        radius=r;
        center=c;
    }
    Circle(double r,int x,int y):center(x,y){
        radius=r;
    }
    Circle(Circle &c){
        center=c.center ;
        radius=c.radius ;
    }
    void set_radius(double r){
        radius=r;
    }
    void set_center(Point c){
        center=c;
    }
    double get_radius(){
        return radius;
    }
    Point get_center(){
    return center;
    }
    double calcArea(){
        double pi=2*acos(0.0);
        return radius*radius*pi;
    }
};
int main()
{
    Circle c1(3.5,5,5);
    Circle c2(c1);
    cout<<c2.calcArea();
    return 0;
}

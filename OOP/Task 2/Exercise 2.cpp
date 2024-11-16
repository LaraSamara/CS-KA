/*
Create class Movable (abstracted) which contains only the following:
- moveUp() => pure virtual method to achieve abstraction
- moveDown() => pure virtual method to achieve abstraction
- moveLeft() => pure virtual method to achieve abstraction
- moveRight() => pure virtual method to achieve abstraction

Create class MovablePoint which inherits from Movable class , and contain
following attributes :
- int x
- int y
- int xSpeed
- int ySpeed
- Default & parameterized constructors
- Implement the above methods as this :
o moveUp() => increase the value of y by ySpeed
o moveDown() => decrease the value of y by ySpeed
o moveLeft() => decrease the value of x by xSpeed
o moveRight() => increase the value of x by xSpeed

your main could be as this :
int main()
{ //x y x_s y_s
MovablePoint m(5, 5, 2, 3);
m.moveUp(); // x = 5, y = 8
m.moveLeft(); // x = 3, y = 8
m.display_info();
}
*/
#include <iostream>
using namespace std;
class Movable{
public:
    virtual void moveUp()=0;
    virtual void moveDown()=0;
    virtual void moveLeft()=0;
    virtual void moveRight()=0;
};
class MovablePoint:public Movable{
private:
    int x, y,xSpeed,ySpeed;
public:
    MovablePoint(){
        x=0;
        y=0;
        xSpeed=0;
        ySpeed=0;
    }
    MovablePoint(int x1, int y1, int xs,int ys){
        x=x1;
        y=y1;
        xSpeed=xs;
        ySpeed=ys;
    }
    void moveUp(){
        y+=ySpeed;
    }
    void moveDown(){
        y-=ySpeed;
    }
    void moveLeft(){
        x-=xSpeed;
    }
    void moveRight(){
        x+=xSpeed;
    }
    void display_info(){
        cout<<"x is: "<<x<<endl;
        cout<<"y is: "<<y<<endl;
        cout<<"X speed is: "<<xSpeed<<endl;
        cout<<"Y speed is: "<<ySpeed<<endl;
    }
};
int main()
{
    MovablePoint m(5, 5, 2, 3);
    m.moveUp(); // x = 5, y = 8
    m.moveLeft(); // x = 3, y = 8
    m.display_info();
    return 0;
}
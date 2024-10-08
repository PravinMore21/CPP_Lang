#include <iostream>

struct Point{
    int x;
    int y;
    Point(int new_x,int new_y): x{new_x}, y {new_y} {}

    Point operator+(const Point &rhs){
        return Point(x+rhs.x , y + rhs.y);
    }

    Point& operator+=(const Point &rhs){
        x += rhs.x;
        y += rhs.y;
        return *this;
    }

    void print(){
        std::cout<< " x = " << x << '\n';
        std::cout<< " y = " << y << '\n';
    
    }
};

int main(){
    Point p1(10,20);
    Point p2(30,41);
    //Point p3 = p1 + p2;
    p1 += p2;
    //p3.print();
    p1.print();
    //Point p3 = p1.operator+(p2); // p1 + p2
    return 0;
}
#include <iostream>

class Point{
    public:
        int x;
        int y;

        void print(){
            std::cout << "x = " << x << '\n';
            std::cout << "y = " << y << '\n';
        }    
};

int main(){
    Point p1;
    p1.x = 12;
    p1.y = 13;
    p1.print();
    return 0;
}
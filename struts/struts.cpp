#include <iostream>

struct Points
{
    /* data */
    int x;
    int y;

    void print(){
        std::cout << " x = " << x << "\n";
        std::cout << " y = " << y << "\n";
    }
};


int main(){

    Points p1;
    p1.x = 10;
    p1.y = 20;
    p1.print();

      Points p2;
    p2.x = 10;
    p2.y = 20;
    p2.print();
    
    return 0;
}
#include <iostream>

struct Points
{
    /* data */
    int x;
    int y;
/*
    Points(){
        x=20;
        y=30;
        std::cout << "Constructor \n";
    }
    */

   //Points() :x(10),y(50) {}
    //Points() {}
    Points() = default;
    Points(int new_x, int new_y): x(new_x),y(new_y){
       // x = new_x;
       // y = new_y;
    }


    void print(){
        std::cout << " x = " << x << "\n";
        std::cout << " y = " << y << "\n";
    }
};
 

int main(){
    Points p;
    //Points p1(23,38);
    p.print();
    
    return 0;
}
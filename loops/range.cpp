
#include <array>
#include<iostream>

int main(){

    std::array<int, 5> my_array = {42,12,43,65,45};

    for (int value : my_array)
    {
        /* code */
        std::cout<< value << ' ';
    
    }
    

    return 0;
}
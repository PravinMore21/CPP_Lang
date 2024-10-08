#include <iostream>
#include <array>

int main(){
    std::array<int, 5> my_arrayw = {45, 23, 3, 4 , 5};

    std::cout<< my_arrayw.front() <<'\n';
    std::cout<< my_arrayw.size() <<'\n';

    return 0;
}
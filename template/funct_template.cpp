#include <iostream>
#include <array>

//template<typename T> 
//void print_array(T array){
void print_array(auto array){
    for(auto value: array) {
        std::cout << value << ' ' ;
    }
    std::cout << '\n';
}

int main(){

    std::array<int, 3> my_int_array = {1,2,3};
    //print_array<std::array<int, 3>>(my_int_array);
    print_array(my_int_array);

    std::array<float, 3> my_float_array = {1.1f, 1.2f, 1.3f};
    //print_array<std::array<float, 3>>(my_float_array);
    print_array(my_float_array);
    return 0;
}
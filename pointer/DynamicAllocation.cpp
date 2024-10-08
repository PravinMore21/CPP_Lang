
#include <iostream>

int main(){
    int *int_ptr = new int;
    *int_ptr = 242;

    std::cout <<" Value " << *int_ptr << "\n";
    std::cout <<" Address " << int_ptr << "\n"; 
    //delete int_ptr; 

    std::cout <<" ============================== \n"; 

    int *int_ptr1 = new int[10];
    int_ptr1[5] = 242;

    std::cout <<" Value " << int_ptr1[5] << "\n";
    std::cout <<" Address " << &int_ptr1[5] << "\n"; 
    delete int_ptr; 
    delete[] int_ptr1;

    return 0;
}
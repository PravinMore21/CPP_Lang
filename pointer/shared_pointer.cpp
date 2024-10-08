#include <iostream>
#include <memory>

int main(){
    std::shared_ptr<int[]> ptr1(new int[10]);
    auto ptr2 = ptr1;
    std::cout<<"Reference Count: " << ptr1.use_count();
    return 0;
}
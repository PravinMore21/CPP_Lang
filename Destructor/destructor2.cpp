 #include <iostream>
#include <memory>

struct IntArray{
    std::unique_ptr<int []> array;
    IntArray(int size):  array(new int[size]) {}
    };
    
int main(){
    IntArray a(10);
    a.array[0]=10;;
    std::cout<< a.array[0] <<'\n';
    return 0;
}
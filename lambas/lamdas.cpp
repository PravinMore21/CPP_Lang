#include <iostream>
#include <vector>
#include <algorithm>
/*
    struct IsDivisible{
        int divisor;
        IsDivisible(int new_divisor) : divisor(new_divisor){}
        bool operator()(int dividend){
            return dividend % divisor == 0;
        } 
    };
  */  

int main(){
    auto is_divisible_by_10 = [divisor=10](int dividend){
        return dividend % divisor == 0;
    };
    //std::cout<< is_divisible_by_10(50);
    std::vector<int> my_vector = {41,84,20, 94, 40, 23};
    auto itr = std::ranges::find_if(my_vector,is_divisible_by_10);
    std::cout<< *itr << '\n';
    return 0;
}

#include <iostream>
#include <array>

int main(){

    std::array<int,5> my_array = {1 ,2, 3, 4, 5 };
    for(auto itr = my_array.begin(); itr < my_array.end(); itr += 1 ){
        std::cout<< *itr << " ";        
    }
    std::cout<<'\n';
    std::cout<<'Reverse array \n';
// reversse iterator
    for(auto itr = my_array.rbegin(); itr < my_array.rend(); itr += 1 ){
        std::cout<< *itr << " ";        
    }
    std::cout<<'\n';

    return 0;
}
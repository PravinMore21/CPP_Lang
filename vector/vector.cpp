#include <iostream>
#include <vector>

void print(std::vector<int> vector){
    for(auto value:vector){
        std::cout<< value << ' ';
    }
    std::cout << '\n';
}


int main(){
    std::vector<int> my_vector = {1 , 2, 3, 4, 5};
    print(my_vector); 
    my_vector.push_back(6);
    print(my_vector); 
    my_vector.pop_back();
    print(my_vector); 
    return 0;
}
#include<iostream>
#include<algorithm>
#include<array>

void print(auto array){
    for (auto value:array){
        std::cout << value << ' ';
    }
    std::cout << '\n';         
}

int main(){
    std::array<int, 5> my_array = {53, 78, 23, 90, 54};
    print(my_array);

    std::sort(my_array.begin(),my_array.end());
    //std::ranges::sort(my_array);
    print(my_array);
    return 0;
}
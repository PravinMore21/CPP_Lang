#include<iostream>
#include<random>

int main(){
    std::random_device rd;
    std::mt19937 md(rd());
    std::uniform_int_distribution uniform(1,6);
    for(int i=0; i< 10 ; i++){
        std::cout<< uniform(md) << ' ';
    }
    return 0;
}
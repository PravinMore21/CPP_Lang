#include <iostream>

int main(){
    int while_items = 10;
    while (while_items > 0){
        std::cout<< "While counter : " <<while_items <<'\n';
        while_items -= 1 ;
    }

    return 0;
}
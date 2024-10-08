#include <iostream>

int main(){
    int while_items = 10;
    do
    {        
        std::cout<< "While counter : " <<while_items <<'\n';
        while_items -= 1 ;
    } while (while_items > 0);
    return 0;
}
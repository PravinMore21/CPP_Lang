#include <iostream>
#include <vector>

struct S {
    S(){
        std::cout<< "Constructor! \n";
    }
    S(const S &s){
        std::cout << "Copy COnstructor \n"; 
    }
    S(S &&s){
        std::cout << "Move COnstructor \n"; 
    }
};

int main(){
    std::vector<S> my_vector;
    S s;
 //   my_vector.push_back(s);
 //  my_vector.push_back(std::move(s));
     my_vector.push_back(S());
    return 0;
}
#include <iostream>

struct S{
    int a;
    int b;
    //bool operator==(const S &s) const = default;
    auto operator<=>(const S &s) const = default;
};

int main(){
    S s1 {1, 2};    
    S s2 {2, 3};
    std::cout << (s1 <= s2) << '\n';
    return 0;
}
 #include <iostream>

struct Animal 
    {
       virtual void speak() = 0;  
    };

struct Dog : Animal
{void speak()  {std::cout << " Woof \n";     }};

struct Cat : Animal
{void speak() override {std::cout << " Meow \n";    }};


int main(){

    Dog d;
    d.speak();
    Cat c;
    c.speak();

    //Animal a;

    Animal &a = d;
    a.speak();

    Animal &b = c;
    b.speak();
    return 0;
}
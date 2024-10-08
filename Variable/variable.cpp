#include <iostream>

using namespace std;

int main() {
    
	int a;
	int b;
	int sum;
	const char* some_char = "Hey there ! howdy \n ";
	
	a = 5;
	b = 10;
	
	sum = a + b;
	cout << some_char;
	cout << "The Sum of " << a << "  and  " << b  << " is  " << sum ;

    return 0;
}
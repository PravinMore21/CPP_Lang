 #include <iostream>

struct IntArray{
    /* data */
    int *array;
    IntArray(int size){
        array = new int[size];
    }
    ~IntArray() {
        std::cout<< " Desctructor " ;
        delete[] array;
    }
};

int main(){
    IntArray a(10);
    a.array[0]=10;;
    std::cout<< a.array[0] <<'\n';
    return 0;
}
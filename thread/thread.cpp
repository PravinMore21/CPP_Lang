#include<iostream>
#include<thread>
#include<vector>

void print_thread_id(int id){
    std::cout<< "Print the thread ID : " << id << '\n';
}

int main(){
   
    std::vector<std::jthread> my_threads;
    for (int j = 0; j < 3;  j += 1){
        my_threads.emplace_back(print_thread_id,j);
    }

    return 0;
}


 //std::thread t1(print_thread_id,0);
   // t1.join();
    //std::jthread t1(print_thread_id,0);

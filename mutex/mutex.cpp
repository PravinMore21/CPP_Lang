#include<iostream>
#include<thread>
#include<vector>
#include<mutex>


int main(){
    std::mutex m;
    auto print_thread_id=[&m](int id){
       // m.lock();
       std::lock_guard<std::mutex> lg(m);
        std::cout<< "Print the thread ID : " << id << '\n';
        //m.unlock();
    };

    std::vector<std::jthread> my_threads;
    for (int j = 0; j < 3;  j += 1){
        my_threads.emplace_back(print_thread_id,j);
    }
    return 0;
}


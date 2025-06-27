#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

mutex mutex1;
mutex mutex2;

void t1() {
    mutex1.lock();
    cout << "Thread 1: locked mutex1\n";
    this_thread::sleep_for(chrono::milliseconds(100));
    
    cout << "Thread 1: trying to lock mutex2...\n";
    mutex2.lock();
    cout << "Thread 1: locked mutex2\n";

    mutex2.unlock();
    mutex1.unlock();
}

void t2() {
    mutex2.lock();
    cout << "Thread 2: locked mutex2\n";
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "Thread 2: trying to lock mutex1...\n";
    mutex1.lock();
    cout << "Thread 2: locked mutex1\n";

    mutex1.unlock();
    mutex2.unlock();
}

int main() {
    thread t1(t1);
    thread t2(t2);

    t1.join();
    t2.join();

    return 0;
}

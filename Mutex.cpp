#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int var = 0;
mutex mx;

void func()
{
    mx.lock();
    for (int i=0; i<100000; i++)
        var++;
    mx.unlock();
}

int main()
{
    thread t1(func);
    thread t2(func);
    t1.join();
    t2.join();
    
    cout<<var<<endl;

    return 0;
}
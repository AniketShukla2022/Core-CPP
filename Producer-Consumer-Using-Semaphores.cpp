#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

#define buff_size 5
int buff[buff_size];

binary_semaphore prod{1};
binary_semaphore cons{0};

void producer()
{
    while (1)
    {
        prod.acquire();
        cout<<"produced"<<endl;
        for (int i=0; i<buff_size; i++)
        {
            buff[i] = i*i;
            cout<<buff[i]<<" "<<flush;
            this_thread::sleep_for(milliseconds(200));
        }
        cout<<endl;
        cons.release();
    }
}

void consumer()
{
    while (1)
    {
        cons.acquire();
        cout<<"consumed"<<endl;
        for (int i=buff_size-1; i>=0; i--)
        {
            cout<<buff[i]<<" "<<flush;
            buff[i] = 0;
            this_thread::sleep_for(milliseconds(200));
        }
        cout<<endl;
        prod.release();
    }
}

int main()
{
    thread t1(producer);
    thread t2(consumer);
    
    t1.join();
    t2.join();
    
    return 0;
}

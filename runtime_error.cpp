#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;
    try
    {
       if (b==0)
            throw runtime_error("divide by zero not possible");
    }
    
    catch(const runtime_error& e)
    {
        cout<<"exception caught "<<e.what()<<endl;
    }

    return 0;
}
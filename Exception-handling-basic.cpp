#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    int a=10,b=0;
    int c;
    try
    {
        if (b==0)
            throw runtime_error("divide by zero");
        c = a/b;
        cout<<c<<endl;
    }
    catch(runtime_error &error)
    {
        cout<<" exception caught "<<error.what()<<endl;
    }
    
    return 0;
}
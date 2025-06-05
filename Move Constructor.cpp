#include <iostream>
#include <vector>
using namespace std;

class A{
    public:
    A()
    {
        cout<<"default constructor"<<endl;
    }
    A(const A&)
    {
        cout<<"copy constructor"<<endl;
    }
    A(const A&&)
    {
        cout<<"move constructor"<<endl;
    }
};

int main()
{
    A a;
    A b(a);
    A c = move(a);
}

/*
default constructor
copy constructor
move constructor
*/


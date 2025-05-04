/*#include <iostream>
#include<memory>
using namespace std;

class BaseClass
{
    private:
    int x;
    public:
    BaseClass(int xx)
    {
        x = xx;
    }
    void show()
    {
        cout<<"value of x is: "<<x<<endl;
    }
    ~BaseClass()
    {
        cout<<"destructor called"<<endl;
    }
};

int main()
{
   // BaseClass* b = new BaseClass(10);
   // b->show();
   // delete b;
   unique_ptr<BaseClass> b(new BaseClass(10));
   b->show();

    return 0;
}*/
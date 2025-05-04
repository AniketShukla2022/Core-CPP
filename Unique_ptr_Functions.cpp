#include <iostream>
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
   unique_ptr<BaseClass> b1 = make_unique<BaseClass>(10); //good to use bcz it handles any exception during object creation as well unlike normal new
   unique_ptr<BaseClass> b2 = make_unique<BaseClass>(20);
   
   //b1=b2;  -> this will throw an error since pointers are unique_ptr
   
   b2 = move(b1);  // b1 will be deleted at this point, destructor for b1 will be called.
   
   b2->show();

   return 0;
}
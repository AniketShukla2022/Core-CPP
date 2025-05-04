#include<bits/stdc++.h>
using namespace std;

class baseclass
{
    public:
    int* x;
    
    baseclass(int xx)
    {
        x = new int(xx); 
    }
    baseclass& operator=(baseclass& b)
    {
        if (this!=&b)
        {
            delete x;
            x = new int(*(b.x));
        }
        return *this;
    }
    void show()
    {
        cout<<"value of x is: "<<*x<<" and the adress of x is: "<<x<<endl;
    }
};

int main()
{
    baseclass b1(10);
    baseclass b2(15);
    b1 = b2;
    b1.show();
    b2.show();
    
    cout<<"after b2.x update:-"<<endl;
    
    *b2.x = 30;
    
    b1.show();
    b2.show();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
    int x;
    int* y;
    Base(int xx, int yy)
    {
        x = xx;
        y = new int(yy);
    }
    Base(Base& b2)
    {
        x = b2.x;
        y = new int(*(b2.y));
    }
    void show()
    {
        cout<<"value of x is: "<<x<<" value of y is: "<<*y<<endl;
    }
};

int main()
{
    Base b(2,3);
    Base b1(4,6);
    b1 = b; //assignment operator -> shallow copy
    b1.show();
    b1.x = 15;
    *(b1.y) = 20;
    b.show();
    
    Base b2(16,18);
    Base b3(b2);//parametreized copy contructor -> deep copy;  Base b3 = b2 would also have created the deep copy. 
    b3.x = 25;
    *(b3.y) = 30;
    b2.show();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class baseclass
{
    public:
    static int x;
    void show()
    {
        cout<<"value of x is: "<<x<<endl;;
    }
};
int baseclass::x = 10;

int main()
{
    baseclass b1;
    b1.show();
    baseclass b2;
    b2.x = 20;
    b2.show();
    b1.show();
    return 0;
}
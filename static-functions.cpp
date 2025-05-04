#include<bits/stdc++.h>
using namespace std;

class baseclass
{
    public:
    static int x1;
    static int x2;
    
    public:
    static void show()
    {
        cout<<"value of x1 is: "<<x1<<" and value of x2 is: "<<x2<<endl;
    }
};

int baseclass::x1 = 10;
int baseclass::x2 = 20;

int main()
{
    baseclass b1;
    b1.show();
    b1.x1 = 30;
    b1.show();
    baseclass::show();
    return 0;
}
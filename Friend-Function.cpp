#include<bits/stdc++.h>
using namespace std;

class baseclass
{
    private:
    int x;
    
    public:
    baseclass()
    {
        x = 20;
    }
    friend void showX(baseclass&);
};

void showX(baseclass& b)
{
    cout<<"value of x is: "<<b.x<<endl;
}

int main()
{
    baseclass b;
    showX(b);
}
#include<bits/stdc++.h>
using namespace std;

class baseclass;

class anotherclass
{
    public:
    void show(baseclass& b);
};

class baseclass
{
    private:
    int x;
    
    public:
    baseclass()
    {
        x = 20;
    }
    
    friend void anotherclass::show(baseclass&);
};

void anotherclass::show(baseclass& b)
{
    cout<<"value of x is: "<<b.x<<endl;
}

int main()
{
    baseclass b;
    anotherclass ac;
    ac.show(b);
    return 0;
}
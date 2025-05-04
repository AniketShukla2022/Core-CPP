#include<bits/stdc++.h>
using namespace std;

class baseclass
{
    private:
    ~baseclass()
    {
        cout<<"destructor called"<<endl;
    }
    public:
    friend void callDestructor(baseclass*);
};

void callDestructor(baseclass* b)
{
    delete b;
}

int main()
{
    baseclass* b = new baseclass();
    callDestructor(b);
    return 0;
    
}
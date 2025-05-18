#include<bits/stdc++.h>
using namespace std;

class baseclass
{
    public:
    int x;
    void getX()
    {
        cout<<"value of x is: "<<x<<endl;
    }
};
class child1 :  virtual public baseclass
{
  
};
class child2 :  virtual public baseclass
{
    
};

class superchild : public child1, public child2
{
    
};

int main()
{
    superchild c1;
    c1.x = 10;
    c1.getX();
    return 0;
}
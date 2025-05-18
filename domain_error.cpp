#include <bits/stdc++.h>
using namespace std;

int func(int num)
{
    try
    {
        if (num < 0)
        {
            throw domain_error("square root of negative number is not possible");
        }
        return sqrt(num);
    }
    catch(const domain_error& e)
    {
        cout<<"domain error exception caught "<<e.what()<<endl;
    }
}

int main()
{
    int num;
    cin>>num;
    
    cout<<func(num);
    
    

    return 0;
}
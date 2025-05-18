#include <bits/stdc++.h>
using namespace std;

void func(string name)
{
    cout<<"my name is: "<<name<<endl;
    return;
}

int main()
{
    string name;
    cin>>name;
    
    try
    {
       func(name);
       if (name != "aniket")
       {
           throw invalid_argument("name is not a string");
       }
    }
    
    catch(const invalid_argument& e)
    {
        cout<<"inavild argument exception caught "<<e.what()<<endl;
    }

    return 0;
}
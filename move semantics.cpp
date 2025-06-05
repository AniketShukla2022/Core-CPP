#include <iostream>
#include <vector>
using namespace std;

void printvector(vector<int>& v)
{
    cout<<"size of vector is: "<<v.size()<<endl;
    for (int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return;
}

int main()
{
    vector<int> v1;
    for (int i=0; i<5; i++)
    {
        v1.push_back(i);
    } // 0 1 2 3 4
    vector<int> v2;
    for (int i=5; i<10; i++)
    {
        v2.push_back(i);
    } //5 6 7 8 9
    
    printvector(v1);
    printvector(v2);
    
    cout<<"after move"<<endl;
    
    v1 = move(v2);
    
    printvector(v1);
    printvector(v2);
    
    return 0;
}

/*
output:
size of vector is: 5
0 1 2 3 4 
size of vector is: 5
5 6 7 8 9 
after move
size of vector is: 5
5 6 7 8 9 
size of vector is: 0

*/
#include <bits/stdc++.h>
using namespace std;

class db{
  private:
  db()
  {
      cout<<"singleton class created";
  }
  
  public:
  static db& getInstance()
  {
     static db instance;
     return instance;
  }
};



int main()
{
    db& s1 = db::getInstance();
    db& s2 = db::getInstance();
    
    if (&s1 == &s2)
    {
        cout<<"both intances are same"<<endl;
    }

    return 0;
}
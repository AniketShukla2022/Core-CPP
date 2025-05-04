#include <iostream>
using namespace std;

class myclass
{
  public:
  int *x;
  
  myclass(int xx)
  {
      x = new int(xx);
  }
  
  myclass(const myclass& m)
  {
      x = new int(*m.x);
  }
  
  void show()
  {
      cout<<"value of x is: "<<*x<<" and address of x is: "<<x<<endl;
  }
  
};

int main()
{
    myclass m1(10);
    myclass m2(m1);
    
    *m2.x = 30;
    m2.show();
    m1.show();

    return 0;
}
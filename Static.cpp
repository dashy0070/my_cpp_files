#include <iostream>
using namespace std;

class test{
public: 
test()
{
  cout<<endl<<"I am in base"<<(string)typeid(this).name()<<endl;
}
static int k; 
 static void fun()
{
  cout<<"Instance is "<<endl<<k;  
  k++;
}  
};
class derived: public test{
public:  
 derived() {
   cout<<endl<<"I am in derived"<<  (string)typeid(this).name()<<endl;
 } 
};

int test::k = 0;

int main() 
{
  test t1, t2;
  derived d1, d2;
  t1.fun();

  t2.fun();
  d1.fun();
  d2.fun();
  return 0;
}


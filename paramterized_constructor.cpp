#include<iostream>
using namespace std;

class test{
public:
int k, l;
//test(); //Not required
test(int m=1, int n=2)
{
    this->k = m;
    this->l = n;
}
//Friend functions are always inline, cant be defined outside the class
friend void access_private(test);
};

void access_private(test t)  //Class name is not required for friend function
{
    cout<<endl<<t.k<<endl<<t.l;
}

int main()
{
test *a = new test(); //Calls parameterized constructor
//test *a = new test(3,4); //Can pass anything, no need to create variables for assigning the values and then passing them
test t;
access_private(t);  //friend functions can access public, private and protected variables of a class
cout<<endl<<a->k<<endl<<a->l;
}

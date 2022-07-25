//The class members declared as private can be accessed only by the functions inside the class. They are not
// allowed to be accessed directly by any object or function outside the class.
// Only the member functions or the friend functions are allowed to access the private data members of a class.

//We can access private method in other class using the virtual function, A virtual function is a member function
//which is declared within a base class and is re-defined (Overridden) by a derived class. Referring to a derived class object using a pointer or a reference to the base class can call a virtual function for that object and execute the derived class’s version of the function.
#include<iostream>
using namespace std;

class test{
private:
//public:
int k, l;
//test();
public:   //Constructor must be public and not in private
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
    cout<<t.k<<endl<<t.l;

}

int main()
{
test t;
access_private(t); //through friend functions
}

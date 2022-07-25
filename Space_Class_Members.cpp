//sizeof class A and class B are both 1 byte only for empty class without any data members
// In case of class where there is a virtual function, each instance of the class will have a pointer to its v-table
// (this is compiler specific though). So the sizeof this class will be sizeof(pointer) normally 4 bytes

//Note: For each instance of the class, memory is allocated to only its member variables i.e. each instance of the class and it
// does not get it's own copy of the member function. All instances share the same member function code.
//Non-virtual member functions do not need to be "allocated" anywhere; they can essentially be treated as normal
// non-class functions with an implicit first parameter of the class instance. They do not add to the class size normally.

#include<iostream>
using namespace std;
class A
{

};
class B
{
        public:
                void disp()
                {
                        cout<<" This is not virtual function.";
                }
};
class C
{
        public:
                virtual void disp()
                {
                        cout<<"This is virtual function.";
                }
};
int main()
{
        cout<<"class A: "<<sizeof(A)<<endl;
        cout<<"class B: "<<sizeof(B)<<endl;
        cout<<"class C: "<<sizeof(C)<<endl;
        return 0;
}

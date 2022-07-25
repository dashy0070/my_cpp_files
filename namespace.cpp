// Namespace Program in C++
#include <iostream>
using namespace std;

int test = 1; //test declared in global namespace

namespace local  //test declared in local namespace
{
    float test = 0.5;
}

main()
{
    cout<< "Printing Local test " << local::test << endl;
    cout<< "Printing Global test " << test << endl;
}

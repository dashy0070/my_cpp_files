#include<iostream>
using namespace std;

bool getdata(int*p, int a[])
{
   p = a;
   for(int i=0; i<=sizeof(a); i++)
   {
        //cout<<endl<<"The elements are"<<p[i];
        cout<<endl<<"The elements are;    "<<i[p];
   }
#if 0
   cout<<endl<<"Element is;    "<<0[p];
   cout<<endl<<"Element is;    "<<1[p];
   cout<<endl<<"Element is;    "<<2[p];
   cout<<endl<<"Element is;    "<<3[p];
   cout<<endl<<"Element is;    "<<4[p];
#endif
}

int main()
{
int arr[] = {1,2,3,4,5};
int *ptr;
cout<<getdata(ptr, arr);

return 0;
}

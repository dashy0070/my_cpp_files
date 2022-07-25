//Improper typecasting is flagged as error in C++ but can be resolved using reinterpret_cast as below:

#include<stdio.h>  //header inclusion in C/C++
main()
{
unsigned int p = 0x12345678;
//unsigned char *q = (&p);

unsigned char *q = reinterpret_cast<unsigned char *>(&p);

printf("q is %u, value is %x", q, *q);
return 0;
}

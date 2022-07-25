#include<iostream>
using namespace std;
int main()
{
int i =0, sum =0;

#if 0
char str[6] = "hello";
char *ptr = str;
printf("%s ", ptr + 1 );  //Output is "ello"


//printf("%s ", &(str[i]) );
printf("%s ", &(ptr[i]) + 1);  //Output is "ello"
#endif


while(i<100)
{
sum = sum + i;
sum = i + sum;
i += 1;
}
cout<<sum;
return 0;

}

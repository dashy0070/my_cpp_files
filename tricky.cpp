//Tricky Question
#include<iostream>
using namespace std;
int main()
{
int a = 1, b =3, c =2;
if (a > b)
    if (b > c)  //Only if 1st if condition is true, it will go to the 2nd if else goes to corresponding else
    {
        cout<<"a>b && b>c";

    }
    else
        cout<<"Something else"<<endl; //This else corresponds to 2nd if, for 1st if there is no corresponding else if below else is omitted
else
        cout<<"this was the missing if"<<endl;
//Note: If there no corresponding else and there is a print statement, it will directly execute the statement after if

return 0;
}

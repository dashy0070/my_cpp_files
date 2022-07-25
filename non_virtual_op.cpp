#include<iostream> 

using namespace std; 

class A { 
public: 
	   void fun() 
	{ cout<<"\n A::fun() called ";} 
}; 

class B: public A { 
public: 
	  void fun() 
	{ cout<<"\n B::fun() called "; }	 
}; 

class C: public B { 
public: 
	void fun() 
	{ cout<<"\n C::fun() called "; }	 
}; 

int main() 
{ 
C c; // An object of class C 
B *b=&c;


b->fun();
//B *b = &c; // A pointer of type B* pointing to c 
//c->fun(); // this line prints "C::fun() called" 
getchar(); 
return 0; 
} 


// Output is B::fun() called

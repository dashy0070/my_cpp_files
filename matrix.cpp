//Write a C++ program to dynamically Allocate Memory for 2D Array, M * N matrix
//This function dyn_allo_memory() should allocate memory for a 2D
//array dynamically and if any exception in allocation then it should  print the exception 
//in the constructor

#include <iostream>
using namespace std;

class test
{
 public: 
 int row, column; 
 test()
 {	
 	   
 }
  
  void dyn_allo_memory(int row, int column);
};

void test::dyn_allo_memory(int M, int N)
{
       row = M;
       column = N;	

	// dynamically allocate memory of size M*N
        int* A = new int[M * N];

        // assign values to allocated memory
        for (int i = 0; i < M; i++)
                for (int j = 0; j < N; j++)
                        *(A + i*N + j) = rand() % 100;

        // print the 2D array
        for (int i = 0; i < M; i++)
        {
                for (int j = 0; j < N; j++)
                        std::cout << *(A + i*N + j) << " ";    // or (A + i*N)[j])

                std::cout << std::endl;
        }

        // deallocate memory
        delete[] A;
}

int main() 
{
 test *obj1 = new test();
 int a= 4, b =5;
 int choice;
 loop:
 cout<<"Enter the row ";
 cin>>a;
 cout<<"Enter the column";
 cin>>b;
 cout<<endl<<"The first matrix is "<<endl;
 obj1->dyn_allo_memory(a,b);
 cout<<endl<<"Do you wish to continue(0/1)"<<endl;
 cin>>choice;
 if(choice)
	goto loop;
 else
	return 0;
 //obj2->dyn_allo_memory(a,b);
}


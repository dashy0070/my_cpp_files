#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
list<int>::iterator i, i1;
list<int> l = {4,1,6,9};
list<int> l1 (10, 0);  //10 elements each initialized to -1
list<int> l2 = {66, 33, 22};
cout<<endl<<"Printing the list elements"<<endl;
for(i= l.begin(); i!= l.end(); i++)
cout<<*i<< " " ; 	
l.push_front(3); //push at start of the list
l.push_front(7);
l.push_back(2);  // push at the end of the list
cout<<endl<<"Printing the updated list elements"<<endl;
for(i= l.begin(); i!= l.end(); i++)
cout<<*i<< " " ; 	

l1.pop_front(); //pop from start of list, not working as expected and it bevaving same as pop_back ?? 
l1.pop_back();
l1.pop_back();
l1.pop_back();
l1.pop_back();
l1.pop_back();  //pop from back of list
l1.splice(l1.begin(), l);
cout<<endl<<"Printing the l1 list elements"<<endl;
for(i= l1.begin(); i!= l1.end(); i++)
cout<<*i<< " " ; 	

l2.splice(l2.begin(), l1);
cout<<endl<<"Printing the l2 list elements"<<endl;
l2.pop_front(); //here pop_front is working beautifully
//i1= l2.begin; i1++;
//l2.insert(i1, 5);
for(i= l2.begin(); i!= l2.end(); i++)
cout<<*i<< " " ; 	
list<int>::reverse_iterator r;
cout<<endl<<"Printing the l2 list elements using reverse iterator"<<endl;
for(r= l2.rbegin(); r!= l2.rend(); r++)
 cout<<*r<<" ";		

return 0;	
}

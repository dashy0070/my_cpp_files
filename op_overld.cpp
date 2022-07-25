//overloading extraction and insertion operator

#include<iostream>

using namespace std;

class Point
{
    int x,y,z;
      friend ostream &operator<<( ostream &output, const Point &p ) { 
         output << p.x << " " << p.y << " " << p.z;
         return output;            
      }

      friend istream &operator>>( istream  &input, Point &p1 ) { 
         input >> p1.x >> p1.y >> p1.z;
         return input;            
      }
};


class Rectangle
{
    int length,breadth;
      friend ostream &operator<<( ostream &output, const Rectangle &r1 ) { 
         output << r1.length << " " << r1.breadth;
         return output;            
      }

      friend istream &operator>>( istream  &input, Rectangle &r2 ) { 
         input >> r2.length >> r2.breadth;
         return input;            
      }
};

class Triangle
{
    int base,height;
      friend ostream &operator<<( ostream &output, const Triangle &t1 ) { 
         output << t1.base << " " <<  t1.height;
         return output;            
      }

      friend istream &operator>>( istream  &input, Triangle &t2 ) { 
          input >> t2.base >>t2.height;
         return input;            
      }
};
int main(){
    Point p;
    Triangle t;
    Rectangle r;

    std::cin >> p >> t >> r;
    std::cout << p << " " << t << " " << r << std::endl;

    std::cin >> p >> r >> t;
    std::cout << p << " " << r << " " << t << std::endl;

    std::cin >> r >> t >> p;
    std::cout << r << " " << t << " " << p << std::endl;

    std::cin >> r >> p >> t;
    std::cout << r << " " << p << " " << t << std::endl;

    std::cin >> t >> r >> p;
    std::cout << t << " " << r << " " << p << std::endl;

    std::cin >> t >> p >> r;
    std::cout << t << " " << p << " " << r << std::endl;

}


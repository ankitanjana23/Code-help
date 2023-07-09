#include <iostream>
using namespace std ;

class A {
      public: 
     // function overloading by defult argument 
     void add(int x , int y , int z = 0 , int w = 0  ){
        cout << "final result will be " << x+y+z+w << endl;
     }
};

int main () {
    A obj ;
    obj.add(2,3);
    obj.add(2,3,4);
    obj.add(2,3,4,5);

}
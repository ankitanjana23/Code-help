#include <iostream>
using namespace std;

class A {
      public : 
      int height ;
      int weight ;

};

class B : public A {

};
class C : public A {

};


int main () {
     B obj1;
     C obj2;
     cout << obj1.height ;
     cout << obj2.weight ; 
}
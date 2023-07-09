#include <iostream>
using namespace std ;

class A {
 public : 
  void func() {
     cout << "I am Class A : " << endl;
  }
};

class B  {
 public : 
  void func() {
     cout << "I am Class B : " << endl;
  }
};

class C : public A , public B  {
    public: 
  void sleep() {
     cout << "I am Class C : " << endl;
  }
};

int main () {
     
     C obj ;
    //  obj.func() ; // genreating error plz diside 2 class name is using same func()  
    // use scope resolution opreator 
    obj.A::func() ;
    obj.B::func();
}
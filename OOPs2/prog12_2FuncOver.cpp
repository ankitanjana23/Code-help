#include <iostream>
using namespace std ;

class A {
      public: 
      void sayHellow() {
        cout << "Hellow Ankit Patel : " << endl ; 
      } 

// function overloading with different  of types of argument 
  void sayHellow(char name){
        
       cout << "Hellow" <<" " << name << endl ;
      }

      void sayHellow(string name){
        
       cout << "Hellow" <<" "<<  name << endl ;
      }
};

int main () {
    A obj ;
    obj.sayHellow();
    obj.sayHellow("patel");
    obj.sayHellow('A');

}
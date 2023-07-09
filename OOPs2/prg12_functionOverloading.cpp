#include <iostream>
using namespace std ;

class A {
    
    // function overloading with different number of argument 

      public: 
      void sayHellow() {
        cout << "Hellow Ankit Patel : " << endl ; 
      } 

      /*  void sayHellow(){                             // genreted error not declare same name function 
        cout <<"Hellow Ajay : " << endl;
      }   */ 
      // if YOU change the signature of function (giving the argument of function)
      void sayHellow(string name){
        
       cout << "Hellow" << name << endl ;
      }
};

int main () {
    A obj ;
    obj.sayHellow();
    obj.sayHellow("patel");

}
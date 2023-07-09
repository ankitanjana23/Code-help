#include <iostream>
using namespace std;

// All Data Mamber and object properties will be private mode called "Encapsulation"
class Student {

   private:    
   // Data Member and Attributes /properties 
   int height ;
   int weight ;
   int age ;

   public: 
   int getAge() {
    return this->age ;   // Data member age return ;
   }

   void setWeight(int w) {
    this->weight = w ;
   }

};
int main () {

   Student ankit ;
}
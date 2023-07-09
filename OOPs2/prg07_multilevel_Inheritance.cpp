#include<iostream>
using namespace std;

class Animal {
   public: 
   int age ;
   int weight;

   void bark(){
    cout <<"barking " << endl;
   }
};

class Dog : public Animal {

  };

class GermanSpher : public Dog{

};

int main() {
    Dog obj1 ;
    obj1.bark() ;

    
}
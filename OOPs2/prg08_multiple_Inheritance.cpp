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

class Human{
    public : 
    string color ;

    void speek() {
        cout << "speeking" << endl;
    }
};

class Hybrid : public Animal , public Human {

  };

int main() {
    Hybrid obj1 ;
    obj1.bark() ;
    
}
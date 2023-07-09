#include <iostream>
using namespace std;

class Human {

   private:    
   // Data Member and Attributes /properties 
   int height ;
  // private file not accessable in any class 

  //All data member is public 
   public: 
   int weight ;
   int age ;

   int getAge() {
    return this->age ;   // Data member age return ;
   }

   void setWeight(int w) {
    this->weight = w ;
   }

};

// making another class 
class Male: public Human {
     public: 
     string color ; 

     void Sleep() {
        cout << "Men always sleep " << endl ; 
     }
};

int main () {

   Male object1 ;
   object1.setWeight(70);
   
   cout << object1.weight << endl;
   // cout << object1.height << endl;
   cout << object1.getAge() << endl ;
   cout << object1.color << endl;
   
}
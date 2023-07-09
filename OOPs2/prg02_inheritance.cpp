#include <iostream>
using namespace std;

// inheritance => one class data member/properties/Attributes accesessable in onother class is called "inheritance " 
// like Human is                 :-         super class / base class /parent class 
// and male and female both are  :-         sub class /child class 

// 9 types for inheritance class 
// in this case Male class ,child class of Human class  && Human class parent class of Male class 

// super class Accessmodifier public  , Mod of sub class public , Data Member of Male class will be public 

/*     Super class                           Sub class                    Result
       Access modifier                       Mode of inheritance          Data member /AM of another class
       Properties/Data Member                                               will be 
       
       Public                                public                       public 
       public                                private                      private
       public                                protected                    protected 

       protected                             public                       protected
       protected                             private                      private 
       protected                             protected                    protected

       private                               public                       Not Accessable 
       private                               private                      NA
       private                               protected                    NA



*/
class Human {

   public:    
   // Data Member and Attributes /properties 
   int height ;
   int weight ;
   int age ;

  //All data member is public 
   public: 
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
   cout << object1.height << endl;
   cout << object1.getAge() << endl ;
   cout << object1.color << endl;
   
}
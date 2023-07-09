// public class & Mode of inheritance private
// protected and private same only difference is 
// super class is private so we can not access in child class 
// super calss is protected so we can access by using child class inside Getter/Setter 

#include<iostream>
using namespace std;

class Human {
    public : 
    int height ;
    int weight;
    private: 
    int age ;

    public: 

    int getAge(){
        return this->age ;
    }
    void setWeight(int w ){
        this->weight = w ;
    }
};

class Male : private Human {
    public : 
    string color ;

    void sleep(){
        cout <<"Male always sleepy : " << endl;
    }
    int getHeight() {
        return this-> height ;
    }
    int getAge(){
       //  return this->age;    // dont use it is not work NA (not accessable)
    }
};

int main() {
    
    // Super class /parent class = > public
    // Mode of inheritance = > private 
    // than child class /sub class / derived class => private 
    // we can access protected file by using getter and setter 

    Male h1;
   // cout << h1.height << endl; Not accessable 
   cout << h1.getHeight() << endl;

   //example is super class => private -> age 
   // we don't access 
   //cout <<h1.age <<endl;
}
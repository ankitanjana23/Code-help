#include<iostream>
using namespace std;

class Animal  {
    public:

    void speak(){
         cout << "speaking : " << endl;
    }
};

class Dog : public Animal {
    public : 

// you can change by own speak()     you can modify the function 
    void speak(){
        cout << "barking " << endl; 
    }
};

int main ( ){
       Dog obj ;
       obj.speak();
}
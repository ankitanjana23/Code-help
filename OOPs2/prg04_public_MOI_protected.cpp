// public class & Mode of inheritance protected 
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

class Male : protected Human {
    public : 
    string color ;

    void sleep(){
        cout <<"Male always sleepy : " << endl;
    }
    int getHeight() {
        return this-> height ;
    }
};

int main() {
    
    // Super class /parent class = > public
    // Mode of inheritance = > protected 
    // than child class /sub class / derived class => protected 
    // we can access protected file by using getter and setter 

    Male h1;
   // cout << h1.height << endl; Not accessable 
   cout << h1.getHeight() << endl;
}
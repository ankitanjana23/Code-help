#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero{
    private: 
    int health ;
    public: 
    char level ;


   //constructor Called 
    Hero(){
        cout << "Constructor Called : " << endl; 
    }

   /* 3 no health private class ki smjh rha hai 
     nearst vaiable select so we can use this pointer 
    Hero(int health){
      health = health ;
    }

    */
    
    Hero(int health){
        cout << "this pointer Address : " <<this <<endl; 
        this->health = health ;
    }

    Hero(int health , char level ){
        this->health = health ;
        this->level = level ;     // this ->level means object addreass 
    }

    void print() {
        cout << level << endl;
    }
    
    int getHealth() {
        return health ;
    }
    
    char getLevel() {    // char return karega 
        return level ;
    }

    void setHealth(int h) {
        health = h ;
    }

    void setLevel(char ch){
        level = ch ;
    }
};


int main () {
   
   //static allocation 
   Hero a(10) ;
   cout << "Address: " << &a << endl;
   a.getHealth() ;

   //dynamic allocation 
   Hero *b = new Hero(11,'B') ;


   //we can also write this 
   Hero *c = new Hero() ;
   
   
}
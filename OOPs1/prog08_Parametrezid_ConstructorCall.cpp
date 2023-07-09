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
   Hero *b = new Hero ;

   //we can also write this 
   Hero *c = new Hero() ;
   
   //Input 
//    a.setHealth(70);
//    a.setLevel('A');
   
//    b->setHealth(20);
//    b->setLevel('B');

//    //print static allocation 
//    cout << "Health : " << a.getHealth() << endl;
//    cout << "level : " << a.getLevel() << endl;

//    //print dynamic allocation 
//    //1st method (derefference)

//    cout <<"Health b: " <<(*b).getHealth()  << endl; 
//    cout << "Level b: " << (*b).getLevel() << endl;

//    // 2nd method 

//    cout <<"Health b: " << b->getHealth()  << endl; 
//    cout << "Level b: " << b->getLevel()  << endl;
}
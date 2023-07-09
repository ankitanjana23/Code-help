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
   Hero a ;

   //dynamic allocation 
   Hero *b = new Hero ;
   
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
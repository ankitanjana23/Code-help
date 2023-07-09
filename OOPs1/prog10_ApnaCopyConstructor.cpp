#include<iostream>
using namespace std;

class Hero {
    private: 
    int health ;
    public: 
    char level; 
   
    Hero() {
        cout<<"Defult Constructor: " << endl;
    }

    Hero(int health , char ch){
        this->health = health ;
        this->level = ch ;
    }

    //Apna Copy Constructor 
    Hero(Hero & temp){
        cout << "Apna copy constructor called!: " << endl;
        this->health = temp.health ;
        this->level = temp.level;
    }


    void print(){
        cout <<"Health: " << this->health << endl;   // this nhi bhi like ge tab bhi run karega 
        cout << "Level: " << this->level << endl;
    }
    //private file access

    int getHealth() {
        return health;
    } 
    char getLevel() {
        return level ;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch ;
    }

};

int main () {
    Hero suresh(70 , 'C') ;
     suresh.print() ;
     //copy value new object  
     
    Hero R(suresh) ;
    R.print() ;
    

    //or we can use simple 
    //suresh.setHealth(70);
    // suresh.setLevel('B');  parameterzid Constructor 
}
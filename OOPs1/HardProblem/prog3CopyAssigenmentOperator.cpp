#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero {
    private: 
    int health ;
    public: 
    char *name ;  // string pointer 
    char level ;

    Hero(){
        cout<<"simple Constructor Called! " << endl;
        char name[100];      // important line intialization technique 
    } 

    void setName(char name[]){
          strcpy(this->name , name);
    }

    void print(){
        cout << endl;
        cout << "Name : " << this-> name << "," << endl ;
        cout << "Level : " << this -> level <<"," << endl;
        cout << "Health : " << this -> health <<"," << endl;
        cout << endl <<endl;
    }

    void setHealth(int health){
        this-> health = health ;
    }

    //Apna Copy constructure (youre own CC)m
    // Constructor Start with class name 

     Hero(Hero & temp){   // temp ko h1 smjh sakte 

        char * ch = new char[strlen(temp.name ) +1 ] ;   // 1 null character new pointer for different memory location we can use 
        strcpy(ch , temp.name);
        this -> name = ch ;
    }
    void setLevel(char level ){
        this-> level = level ;
    }
    
};

int main() {
    Hero h1 ;     // constructor call and name intalize 
    h1.setHealth(12);
    h1.setLevel('B') ;
    char name[7] = "Babber" ;
    h1.setName(name);
    h1.print() ;
    Hero h2(h1);
    h1.name[0]= 'G' ;
    h2.print() ;

    //Copy Assigenment Operatore
    h1 = h2 ;
    h1.print() ;
    h2.print() ;

   

    
}
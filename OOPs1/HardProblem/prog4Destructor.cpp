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

    Hero(Hero & temp){   // temp ko h1 smjh sakte 

        char * ch = new char[strlen(temp.name ) +1 ] ;   // 1 null character new pointer for different memory location we can use 
        strcpy(ch , temp.name);
        this -> name = ch ;
    }
    void setLevel(char level ){
        this-> level = level ;
    }

    ~ Hero(){
        cout<<"Destructor Called " << endl;
    }
    
};

int main() {
    //static alloction 
    Hero a ;

    // dyanmic allocation 
    Hero *b = new Hero ;   
    //delete b;  
    delete b;     // manually call krna pdeaga    with the help of delete 
}
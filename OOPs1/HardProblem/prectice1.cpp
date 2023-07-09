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
    
};

int main() {
    Hero h1 ;     // constructor call and name intalize 
    
    h1.setHealth(12);
    h1.level = 'B' ;
    char name[7] = "Babber" ;
    h1.setName(name);

    h1.print() ;

    // defult copy constructor use 
    Hero h2(h1);    // we can also use Hero h2 = h1 ;
    h2.print() ;

    // main Task if we perform changes 
    h1.name[0] = 'G' ;
    h1.print();
    h2.print();
    //Result => 
    //both are same but we can change only one object it is shallow copy 
    // because both are(object h1& h2 ) pointing same mamory address 

}
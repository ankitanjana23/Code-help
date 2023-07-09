#include <iostream>
using namespace std ;

class Hero {
     
     private: 
     int health;
     public: 
     char level ;

     int gethealth(){
        return health ;
     }

     void sethealth(int h ){
        health = h;
     }

};

int main () {
    Hero ramesh ;
    int h ;
    cout <<"Enter the health: " ;
    cin >>h ;
    ramesh.sethealth(h);
    cout << ramesh.gethealth() << endl;
}
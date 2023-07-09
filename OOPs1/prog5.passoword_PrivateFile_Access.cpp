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

     void sethealth(int h , char pswd ){
         if(pswd == 'A'){
        health = h;
         }
     }

};

int main () {
    Hero ramesh ;
    int h ;
    cout <<"Enter the health: " ;
    cin >>h ;
    int pass ;
    cout <<"Enter the Password: " ;
    cin >> pass;
    ramesh.sethealth(h,pass);
    cout << ramesh.gethealth() << endl;
}
#include <iostream>
using namespace std;

// static member ko hmm binn object declare karre use karr skte hai 
// static memmber print using object but it is not right method so don't use only for understanding ;

class Hero {
    private: 
    int health ;
    public: 
    
    char level ;
    static int timeToComplete ; // static member declartion 
};

int Hero:: timeToComplete = 5;     // declartion 

int main () {
 
 cout << Hero :: timeToComplete << endl;
 Hero a ;
 cout << a :: timeToComplete << endl;
//  Hero b ;
//  b::timeToComplete = 690 ; 

//  cout << Hero:: timeToComplete << endl;
//  cout << a :: timeToComplete << endl;
//  cout << b :: timeToComplete << endl;
}
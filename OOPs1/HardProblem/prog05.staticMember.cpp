#include <iostream>
using namespace std;

// static member ko hmm binn object declare karre use karr skte hai 

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
}
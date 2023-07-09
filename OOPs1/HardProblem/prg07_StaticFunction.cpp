//Static function access only static member create in class and
// we can use in main() 

#include <iostream>
using namespace std;

class Hero {
    private: 
    int health ;
    public: 
    
    char level ;
    static int timeToComplete ; // static member declartion 
    static int random(){
        return timeToComplete ;
    }
};

int Hero:: timeToComplete = 5;     // declartion 

int main () {
 
 cout << Hero :: random() << endl;
 
}
#include<iostream> 
#include "Hero.cpp"
using namespace std;

int main () {
    Hero ramesh ;
    ramesh.age = 23 ;
    ramesh.health = 70 ; 
    
    cout << "Height : "<< ramesh.health << endl;
    cout << "Level : " << ramesh.age << endl;
    
}
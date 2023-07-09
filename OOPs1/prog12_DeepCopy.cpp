#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero {
   private: 
   int health ;
   public: 
   char *name ; // string 
   char level ;

   Hero(){
    name = new char[100] ;
   }

    void print() {
    cout <<endl;
    cout << "[ name : " << this->name << ","<< endl;
    cout << "health : " << this -> health <<"," << endl ;
    cout << "level : " << this -> level << endl; 
    cout << endl << endl;
   }

   void setHealth(int h){
    health = h ;
   }
   void setLevel(char ch ){
    level = ch ;
   }

   void setName(char name[]){
    strcpy(this->name , name) ;
   }
};

int main() {
 
 Hero h1 ;
 h1.setHealth(70);
 h1.setLevel('C');
 char name[7] = "Babber" ;  // name set kar diya 
 h1.setName(name) ;


 h1.print() ;

// shallow copy use defult constuctor 
 Hero h2(h1);
 h2.print() ;
 //Hero hero2 = hero1; 

//if we change the starting Index 
h1.name[0] = 'G'; // char ke liye single code always 
cout<<"AfterChanges: " << endl;
h1.print();
h2.print();

}
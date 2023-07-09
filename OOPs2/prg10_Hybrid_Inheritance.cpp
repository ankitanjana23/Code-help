#include <iostream>
using namespace std ;

class A {

public: 
void fun1(){
    cout <<"function 1 excuted "<< endl;
}
};

class B : public A{
public: 
void fun2(){
    cout <<"function 2 excuted " << endl;
}
};

class E {
    public: 
void fun4(){
    cout <<"function 4 excuted "<<endl ;
}

};

class C : public A , public E {             // multiple inheritance  && also HIerarchical inheritance 
public: 
void fun3(){
    cout <<"function 3 excuted "<<endl ;
}
};

int main() {
    cout<<"/n Class  A called :"<< endl;
    A obj1;
    obj1.fun1() ;
    cout<<"/n Class B called :"<< endl;
    B obj2 ;
    obj2.fun1() ;
    obj2.fun2();
    cout<<"/n Class C called :"<< endl;
    C obj3;
    obj3.fun1();
    // obj3.fun2();
    obj3.fun3();

    cout<<"/n Class  E called :"<< endl;

    E obj4;
    obj4.fun4();


}
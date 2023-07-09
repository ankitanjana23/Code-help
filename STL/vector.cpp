#include<iostream>
#include<vector> // include
using namespace std;

int main()
{
vector<int> v;

// 2nd techniqes 
vector<int > a(5,1) ;  // 5 element ko initalize karr do 1 se 
cout << "Print vector: " << endl;
for(int i : a) {
cout << i << endl;
}

// 3 rd tecniques 
vector<int>last(a) ; // copy a into last vector 
cout << "Last vector" << endl;
for(int i : last) {
cout << i << endl;
}

cout << "Capacity -> " << v.capacity() << endl;

v.push_back(1) ;
cout << "Capacity -> " << v.capacity() << endl;

v.push_back(2) ; 
cout << "Capacity -> " << v.capacity() << endl;

v.push_back(3) ;
cout << "Capacity -> " << v.capacity() << endl;
cout << "Size -> " << v.size() << endl;

cout << "Element at 2nd Index " << v.at(2) << endl;

cout << "First Element : " << v.front() << endl;
cout << "Last Element : " << v.back() << endl;

cout << "befor pop " << endl;
for(int i : v) {
cout<< i << endl;
}

v.pop_back() ;
cout << "after pop" << endl;
for(int i : v) {
cout<< i << endl;
}

cout << "before clear size : " <<  v.size() << endl;
v.clear() ;
cout << "After clear size : " << v.size() << endl;

cout << "Capacity -> " << v.capacity() << endl;

return 0;

}
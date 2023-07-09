#include <iostream>
using namespace std;
// recursion - A fuction call himeself 

int fectorial(int n){
    cout << n << endl;
    if(n==0){    // f(0) last function 
        return 1;
    }
    int small_output = fectorial(n-1);
    return n * small_output ;
}
int main()
{
   int n ;
   cin >> n;
   int output = fectorial(n);  // n! = n* (n-1) * (n-2) * (n-3) *
   cout << output << endl;     // n! = n* (n-1)!

    return 0;
}
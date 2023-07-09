#include <iostream>
using namespace std ;
// find array sorted ya not and return true false , with the help of recurision 

bool is_Sorted (int arr[] , int size ){
    if(size == 0 || size == 1){
        return true ;
    }
    if(arr[0] > arr[1] ){
        return false ;
    }
    bool is_SmallerSorted = is_Sorted(arr+1, size-1);
    return is_SmallerSorted ;
}
int main () {
    // int arr[100] ;
    int n ;
    cin>>n;
    int * p = new int [n] ;  // heap memory use 
    for(int i = 0 ;i<n; i++){
        cin >> p[i];  // p[i] = *p(i+1) = i[p]
    }
    cout << is_Sorted(p , n);
    return 0;
}
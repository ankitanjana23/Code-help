#include <iostream>
using namespace std;

int lastIndex(int a[] , int size , int x){
    if(size == 0){
        return -1 ;
    }
    int ans = lastIndex(a+1 , size-1, x);
    if(ans == -1){
        if(a[0]==x){
            return 0;
        }
    }
    
    if(ans == -1){
        //nothing 
    }
    else {
        ans = ans +1;
    }
    return ans ;
}

int main()
{
    int a[100] ;
    int n ;
    int x ;
    cout << "Enter the array size : " << endl;
    cin >> n ;
    cout << "Enter the search x : " << endl;
    cin >> x ;
    cout << "Enter the array: "<< endl;
    for(int i = 0 ; i<n;i++){
        cin >>a[i] ;
    }
   
    cout << lastIndex(a , n , x) << endl;

    return 0;
}
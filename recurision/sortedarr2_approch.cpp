#include <iostream>

using namespace std;

void rearange(char s[]){
    if(s[0]=='\0'){
        return ;
    }
    if(s[0]!='x'){
        rearange(s+1);
    }
    if(s[0]=='x'){
        int i = 1 ;
        for(;s[i]!='\0';i++){
            s[i-1] = s[i] ;
        }
        s[i-1] = s[i] ; // null character 
        rearange(s) ; // string ki size kamm ho chukki hai 
    }
}

int length(char s[]){
    if(s[0]=='\0'){
        return 0;
    }
    int smallcase = length(s+1);
    return 1+smallcase ;
}
int main()
{
   char str[100];
   cin>> str ;
   int l = length(str);
   cout<< l << endl;
   cout <<" rearange string "<< endl;
   rearange(str);
   l = length(str);
   cout<<  l << endl;
    return 0;
}

//axbzxc 
//abzc  return ;
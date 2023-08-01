#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int dfa=0;
void A(char c)
{   
    if(c=='0')
    dfa=0;
    else if(c=='1')
    dfa=1;
}
void B(char c)
{   
    if(c=='0')
    dfa=2;
    else if(c=='1')
    dfa=4;
}
void C(char c)
{   
    if(c=='0')
    dfa=3;
    else if(c=='1')
    dfa=0;
}
void D(char c)
{   
    if(c=='0')
    dfa=4;
    else if(c=='1')
    dfa=3;
}
void E(char c)
{   
    if(c=='0')
    dfa=1;
    else if(c=='1')
    dfa=2;
}
bool isAccepted(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(dfa==0)
            A(str[i]);
        else if(dfa==1)
             B(str[i]);
        else if(dfa==2)
             C(str[i]);
        else if(dfa==3)
             D(str[i]);
        else if(dfa=4)
             E(str[i]);
        else return false;
    }
    if(dfa==0)
    {
        return true;
    }
    else return false;
}

int main()
{
    long long int inputString;
    char res[1000];
    cout<<"Ankit Anjana"<<endl;
    cout<<"0901AI201011"<<endl;
    cout<<"Enter Decimal Number"<<endl;
    cin>>inputString;
    itoa(inputString,res,2);
    string binary=res;
    if(isAccepted(binary))
    cout<<"Divisible By 5";
    else 
    cout<<"Not Divisible By 5";
}

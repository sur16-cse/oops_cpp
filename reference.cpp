#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10,&b=a;//a and b have the same memory
    cout<<"a"<<a<<" "<<"b"<<b<<endl;
    cout<<"&a"<<&a<<" "<<"&b"<<&b<<endl;
    ++a;//change in a also appear in b
    cout<<"a"<<a<<" "<<b"<<b<<endl;
    ++b;//change in b also appear in a
    cout<<"a"<<a<<" "<<b"<<b<<endl;
    }
#include<bits/stdc++.h>
using namespace std;
void function_param(int &b,int c);
int main(){
    int a=20;//a and b have the same memory
    cout<<"a"<<a<<" "<<"&a"<<&a<<endl;
    function_param(a,a);
    }
    void function_param(int &b,int c){
        cout<<"b"<<b<<" "<<"&b"<<&b<<endl;//call by refernce
        cout<<"c"<<c<<" "<<"&c"<<&c<<endl;//call by value
    }
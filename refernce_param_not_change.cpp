#include<iostream>
using namespace std;
//ref param may get change in the called function so use const
int ref_const(const int &x){
++x;
return(x);
}
int main(){
    int a=10,b;
    b=ref_const(a);
    cout<<"a="<<a<<"and"<<"b"<<b<<endl;

}
//output:error
//refernce x is const so no change of x is possible
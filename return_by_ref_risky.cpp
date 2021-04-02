#include<iostream>
using namespace std;
int& return_by_ref(int &x){
int t=x;
t++;
return(t);
}
int main(){
    int a=10,b;
    b=return_by_ref(a);
    cout<<"a="<<a<<"and"<<"b="<<b<<endl;
    return_by_ref(a)=3;//changes reference
    cout<<"a="<<a<<endl;

}
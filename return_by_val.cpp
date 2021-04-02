#include<iostream>
using namespace std;
int func_return_by_val(int &x){
cout<<"x="<<x<<"&x="<<&x<<endl;
return(x);
}
int main(){
    int a=10;
    cout<<"a="<<a<<"&a="<<&a<<endl;
   const int &b=func_return_by_val(a);//return by val so differnt address
   //function invoke so it is expression so use const
    cout<<"b="<<b<<"&b="<<&b<<endl;

}
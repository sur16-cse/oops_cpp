//restriction oin function overloading
#include<iostream>
using namespace std;
int area(int a,int b){return (a*b);}
double area(int a,int b){return (a*b);}
//overload function difer by return type
//redefiniton differnt basic types
int main(){
int x=10,y=12,z=6,v=5,t;
double f;
t=area(x,y);
f=area(z,v);
//unable to resolve function overload
//ambiguity
}
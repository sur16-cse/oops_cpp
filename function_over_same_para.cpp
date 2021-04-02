//function overloading have same paramter
#include<iostream>
using namespace std;
int add(int a,int b){
    return(a+b);
}
double add(double a,double b){
    return(a+b);
}
int main(){
int x=5,y=6,z;
z=add(x,y);//int add(int,int)
cout<<"int sum="<<z<<endl;
double s=add(4.7,7.9);//double add(double,double)
cout<<"double sum"<<s<<endl;
}
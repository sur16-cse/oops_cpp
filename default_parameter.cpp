#include<iostream>
using namespace std;
int identity_function(int a=10){
    return a;
}
int main(){
    int x=5,y;
   y=identity_function(x);//usual function call
   cout<<"y="<<" "<<y<<endl;
   y=identity_function();//uses default value
   cout<<"y="<<" "<<y<<endl;
}
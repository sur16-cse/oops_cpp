#include<iostream>
using namespace std;
int sum(int a=10,int b=45){
    return (a+b);
}
int main(){
    int x=5,y=56,z;
   z=sum(x,y);//usual function call
   cout<<"sum="<<" "<<z<<endl;
   z=sum(x);//uses default value
   cout<<"sum="<<" "<<z<<endl;
   z=sum();
   cout<<"sum="<<" "<<z<<endl;
}
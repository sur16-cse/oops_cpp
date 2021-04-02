//differnt # of parameter
#include<iostream>
using namespace std;
int area(int a,int b){
    return (a*b);
}
int area(int c){
    return (c*c);
}
int main(){
    int x=10,y=12,t,u;
    t=area(x,y);
    cout<<"area of rec"<<" "<<t<<endl;
    u=area(y);
    cout<<"area of square"<<" "<<u<<endl;
}
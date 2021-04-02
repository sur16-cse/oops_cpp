//nested try block
#include<iostream>
using namespace std;
int main(){
    try{
        cout<<"welcome"<<endl;
    try{
        cout<<"inner block"<<endl;
        throw 10;
    }
    //throw value within another try block
    catch(int x){
        cout<<"throw working"<<endl;
        throw x;
    }
    }
    catch(...){
        cout<<"outer try block"<<endl;
    }
}
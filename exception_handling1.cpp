//try--- which contain error causing program
//throw-- whenever error is occured then thrown is goin to throw some value
//catch--catch thrown value and provide solution to error causing program
#include<iostream>
using namespace std;
int main(){
    int a,b;
    try{
        cout<<"enter two number"<<endl;
        cin>>a>>b;
        if(b==0) throw 0;
        cout<<"division"<<a/b<<endl;
    }
    catch(int x){
        cout<<"division not possible"<<endl;
    }
}
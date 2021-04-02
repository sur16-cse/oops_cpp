//excetion with other data type except int
#include<iostream>
using namespace std;
int main(){
    try{
        cout<<"telling any exception"<<endl;
        throw 'a';
    }
    catch(...)
    //not have any type of parameter
    {
        cout<<"try block throws"<<endl;
    }
}
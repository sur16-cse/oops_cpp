#include<iostream>
using namespace std;
int main(){
    try{
        cout<<"before throw"<<endl;
        throw 1;
        //after this line throw goes to catch
        cout<<"after throw"<<endl;//not printed
    }
    catch(int x){
     cout<<x<<"is printed"<endl;
    }
    cout<<"thank you"<<endl;
}
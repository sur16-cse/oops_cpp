//base class and class
#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"I am in the constructor"<<endl;
    }
    ~Test(){
        cout<<"i am inthe destructor"<<endl;
    }
};
int main(){
    try{
        cout<<"welcome to exception handling"<<endl;
        Test t;
        throw 0;//throw occured destructor is working
        cout<<"testing destructor"<<endl;
    }
    catch(...){
        cout<<"thank you"<<endl;
    }

}
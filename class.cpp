#include<iostream>
using namespace std;
class Complex{
    public:
    double re,im;//data member
};
int main(){
Complex n1={4.2,5.3};//object through data member is accessed using . operator
cout<<n1.re<<" "<<n1.im;
}
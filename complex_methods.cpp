#include<bits/stdc++.h>
using namespace std;
class Complex{
    public:
    double re,im;
    //memeber function/methods
    //norm of complex numer,print-method
    
    double norm(){
        return sqrt(re*re+im*im);
    }
    void print(){
cout<<"|"<<re<<"+j"<<im<<"|";
cout<<norm();
}
};
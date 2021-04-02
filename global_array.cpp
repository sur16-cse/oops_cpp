#include<iostream>
using namespace std;
const int nArraySize=100;
const int nElements=10;
int main(){
    int A[nArraySize];
    for(int i=0;i<nElements;i++){
    A[i]=i+i;
    cout<<A[i]<<" ";
    }
}
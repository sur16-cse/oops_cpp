#include<iostream>
using namespace std;
typedef struct{int data[10][10];}mat;
typedef struct{int data[10][10];}vec_row;
typedef struct{int data[10][10];}vec_col;
void multiply_mm(mat a,mat b,mat *c){}
void multiply_mvc(mat a,vec_col b,vec_col *c){}
void multiply_vrm(vec_row a,mat b,vec_row *c){}
void multiply_vrvc(vec_row a,vec_col b,int *c){}
void multiply_vcvr(vec_col a,vec_row b,mat *c){}
int main(){
    mat m1,m2,rm;
    vec_row rv,rrv;
    vec_col cv,rcv;
    int r;
    multiply_mm(m1,m2,&rm);
    multiply_mvc(m1,cv,&rcv);
    multiply_vrm(rv,m2,&rrv);
    multiply_vrvc(rv,cv,&r);
    multiply_vcvr(cv,rv,&rm);
}
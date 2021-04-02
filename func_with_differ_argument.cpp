#include<iostream>
using namespace std;
typedef struct{int data[10][10];}mat;
typedef struct{int data[10][10];}vec_row;
typedef struct{int data[10][10];}vec_col;
void multiply(const mat &a,const mat &b,mat &c){}
void multiply(const mat &a,const vec_col &b,vec_col &c){}
void multiply(const vec_row &a,const mat &b,vec_row &c){}
void multiply(const vec_row &a,const vec_col &b,int &c){}
void multiply(const vec_col &a,const vec_row &b,mat &c){}
int main(){
    mat m1,m2,rm;
    vec_row rv,rrv;
    vec_col cv,rcv;
    int r;
    multiply(m1,m2,rm);
    multiply(m1,cv,rcv);
    multiply(rv,m2,rrv);
    multiply(rv,cv,r);
    multiply(cv,rv,rm);
}
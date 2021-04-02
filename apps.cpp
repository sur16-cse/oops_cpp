#include<iostream>
#include "myfunc.h"
void g(int i,double f=0.0,char ch);
void g(int i=0,double f,char ch);
int main(){
    int i=5;
    double d=1.2;
    char c='b';
    g();
    g(i);
    g(i,d);
    g(i,d,c);
    return 0;
}
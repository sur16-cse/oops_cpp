#include<stdio.h>
typedef struct Complex{
    double re,im;
}complex;
int main(){
    complex n1={4.2,5.3};
    printf("%d%d",n1.re,n1.im);
}
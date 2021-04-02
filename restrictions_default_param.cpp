#include<iostream>
//void f(int,double=0.0,char*);
//error:missing default param for param 3
void g(int,double=0,char * =NULL);
//void g(int,double=1,char*=NULL);
//error:redefinition of default param :param 3
//error:redefinition of default param :param 2
int main(){
int i=5;double d=1.2;char c='b';
//g();//error function does not take 0 arguments
g(i);
g(i,d);
g(i,d,&c);
}
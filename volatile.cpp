#include<bits/stdc++.h>
using namespace std;
static volatile int i;
//being volatile i can be changed anytime.it waits till value becomes 100 
void fun(void){
    i=0;
    while(i!=100)//compiler does not optimise
    cout<<i<<" ";
}
int main(){
    fun();

}
#include<iostream>
using namespace std;
class Point{
    public:
    int x, y;
    };
class Rect{
    public:
    Point tl, br;
};
int main(){
Rect r={{3,4},{5,8}};
cout<<r.tl.x<<r.tl.y<<r.br.x<<r.br.y;
}
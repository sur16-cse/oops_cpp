#include<stdio.h>
typedef struct Point {
    int x, y;
}point;
typedef struct Rect {
    point tl, br;
}rect;
int main(){
    rect a={{0,2},{6,7}};
    printf("%d%d%d%d",a.tl.x,a.tl.y,a.br.x,a.br.y);
}
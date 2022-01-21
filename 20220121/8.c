#include<stdio.h>

void kyoto(int x1, int y1, int x2, int y2){
    if(x1>=x2&&y1>=y2){
        putchar('\n');
        return;
    }
    if(x1<x2){
        printf("E");
        kyoto(x1 + 1, y1, x2, y2) ;
    }
    if(y1<y2){
        printf("S");
        kyoto(x1, y1 + 1, x2, y2);
    }
}

int main(void){
    kyoto(0,0,3,3);
    return 0;
}
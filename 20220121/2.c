#include<stdio.h>

int gcd(int x, int y){
    if(x==1||y==1){////////////例示ｘ＝84，ｙ＝1  このifないと最大公約数が84になる////
        return 1;
    }
    if(x%y==0){
        return x;
    }
    gcd(y,x%y);
}

int main(void){
    int x,y;
    printf("二つの（非負の）整数値 x と y を入力してください。\nx：");
    scanf("%d",&x);
    printf("y：");
    scanf("%d",&y);
    printf("最大公約数は %d です。\n",gcd(x,y));
    return 0;
}
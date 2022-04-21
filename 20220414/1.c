#include<stdio.h>

int main(void){
    int a, b, c;
    printf("input : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a == 7 && b == 5 && c== 3){
        printf("おめでとう\n");
    }else{
        printf("いいね\n");
    }
    return 0;
}
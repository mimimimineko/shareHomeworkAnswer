#include<stdio.h>

void printSenary(int n){
    if(n>=6){
        printSenary(n/6);
    }
        printf("%d",n%6);
}



int main(void){
    int a;
    printf("整数を入力して下さい: ");
    scanf("%d",&a);
    printf("その数の 6 進数による表現は ");
    printSenary(a);
    printf(" です。\n");
    return 0;
}
#include<stdio.h>

int main(void){
    int genka,price;
    double per;

    printf("原価: ");
    scanf("%d",&genka);
    printf("価格: ");
    scanf("%d",&price);


    per =(double) (price - genka)*100/price;
    printf("利益率は %.1f%% です\n",per);
    return 0;
}
#include<stdio.h>
double profitRatio(int genka,int kakaku);
int main(void){
    int genka,kakaku;
    printf("原価: ");
    scanf("%d",&genka);
    printf("価格: ");
    scanf("%d",&kakaku);
    double riekiritsu = profitRatio(genka,kakaku);
    printf("利益率は %.1f%% です\n",riekiritsu);
    return 0;
}
double profitRatio(int genka,int kakaku){
    return (kakaku-genka)*100/kakaku;
}
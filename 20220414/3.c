#include<stdio.h>

int main(void){
    printf("商品代金（税抜き）: ");
    int a;
    scanf("%d",&a);
    int tax=a*0.1;
    int pay=a*1.1;
    int point=a*1.1/10;
    printf("消費税%d円，お支払い額%d円です\n%dポイントつきました\n",tax,pay,point);
    return 0;
}
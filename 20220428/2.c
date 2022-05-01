#include<stdio.h>
int parkingFee(int min);

int main(void){
    int time,money;
    printf("時間 : ");
    scanf("%d",&time);
    money=parkingFee(time);
    printf("料金 : %d円\n",money);
    return 0;
}
int parkingFee(int min){
    int fee=300;
    for(int i=60;i<min;i+=30){
        fee+=100;
    }
    return fee;
}
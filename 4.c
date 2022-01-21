#include<stdio.h>
#include<math.h>

int main(void){
    printf("一辺の長さを求めたい正方形の面積を入力せよ。");
    double a;
    scanf("%lf",&a);
    printf("%f\n",sqrt(a));
    return 0;
}
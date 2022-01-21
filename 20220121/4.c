#include<stdio.h>
#include<math.h>

int main(void){
    printf("面積を入力してください: ");
    double a;
    scanf("%lf",&a);
    printf("その面積を持つ正方形の一辺の長さは %f です。\n",sqrt(a));
    return 0;
}
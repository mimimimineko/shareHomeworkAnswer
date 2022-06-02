#include<stdio.h>


void divide_Real(double x,int *p_i,double *p_f);

int main (void){
    // INPUT 用変数
    double a;

    // OUTPUT 用変数
    int seisubu;
    double shosubu;

    // OUTPUT 用 ポインタ型
    int *p_i;
    double *p_f;

    // OUTPUT 用変数と　ポインタを結びつける
    p_i=&seisubu;
    p_f=&shosubu;

    // INPUT
    printf("入力：");
    scanf("%lf",&a);

    
    divide_Real(a,p_i,p_f);

    // OUTPUT
    printf("整数部：%d\n",seisubu);
    printf("小数部：%f\n",shosubu);

    return 0;
}

void divide_Real(double x,int *p_i,double *p_f){
    // 整数と小数部を求める
    int seisubu=x/1;
    double shosubu=x-seisubu;

    *p_i=seisubu;
    *p_f=shosubu;
}
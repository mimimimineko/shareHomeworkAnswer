#include<stdio.h>
int main(void){
    int weight,height;
    printf("身長[cm]: ");
    scanf("%d",&height);
    double heightM = (double)height /100;
    printf("体重[kg]: ");
    scanf("%d",&weight);
    double bmi = weight/heightM/heightM;
    if(bmi<25){
        printf("BMIは%.1f，肥満ではありません\n",bmi);
    }else{
        double defaultWeight =22*heightM*heightM;
        printf("BMIは%.1f，肥満です\n",bmi);
        printf("身長%dcmの標準体重は%.1fkgです\n",height,defaultWeight);
    }
    return 0;
}
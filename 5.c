#include<stdio.h>
#include<math.h>
#define D_KOSU 7
#define D_X_SA 0.2

int main(void){
    //yは各項の和
    double y;
    double x=-10.0;
    //xは1/5ずつ増える　-10＜＝ｘ＜＝10
    for(int loop=0;loop!=1;loop=x/10){
        y=0;
        //各項を計算しｙに足す 1項目から　最後の項 D_KOSU 目まで
        for(int k=1;k<=D_KOSU;k++){
            y+=sin(k*x)/k;
        }
        printf("%f %f ",x,y);
        x+=0.2;
    }
    printf("\n");
    return 0;
}
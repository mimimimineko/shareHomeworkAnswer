#include<stdio.h>

int main(void){
    int v[]={60, 36, 42, 51, 83, 81, 29, 45, 77, 62};
    for (int i=1 ; i<=10  ; i++){
        printf("%d番 %d ",i,v[i-1]);
        if(v[i-1] < 60){
            printf("不合格\n");
        }else{
            printf("合格\n");
        }
    }
    return 0;
}
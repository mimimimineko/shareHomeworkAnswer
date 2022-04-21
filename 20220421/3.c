#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void){
    srand((unsigned)time(NULL));  /* 乱数のseed（種）の設定．1回呼び出せばよい */
    printf("ぐー：0, ちょき：1, ぱー：2\n");

    int a=0;
    while(a==0){
        int you,com;

        printf("あなたの手： ");
        scanf("%d",&you);

        printf("Computer　");

        com = rand(); /* 乱数生成．乱数が必要な場所で呼び出せばよい． */
        com %=3;

        if(com ==0){
            printf("ぐー");
        }else if (com==1){
            printf("ちょき");
        }
        else{
            printf("ぱー");
        }
        
        printf("　vs　");

        if(you ==0){
            printf("ぐー");
        }else if (you==1){
            printf("ちょき");
        }
        else{
            printf("ぱー");
        }

        printf("　あなた\n");

        
        if(you+1 == com||you-2==com){
            printf("あなたの勝ちです！\n");
            a++;
        }else if(com+1==you||com-2==you){
            printf("あなたの負けです...\n");
            a++;
        }else{
            printf("あいこでしょ\n");
        }
    }
    

    return 0;
}
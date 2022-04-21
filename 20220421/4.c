#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int janken();

int main(void){
    
    int money=200;
    while(money<500&&money>0){
        money-=100;
        printf("掛け金を支払いました（現在の所持金： %d 円）\n",money);
        int z=janken();
        printf("%d",z);
        if(z==1){
            money +=200;
        }
        printf("現在の所持金は %d 円です．\n",money);
        if(money>=500){
            printf("勝ちすぎて、誰も勝負に挑んで来なくなりました。\n");
            break;
        }else if(money<=0){
            printf("破産しました．ゲーム終了です．\n");
            break;
        }
    }
    return 0;
}

int janken(){
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
            return 1;
        }else if(com+1==you||com-2==you){
            printf("あなたの負けです...\n");
            a++;
            return 0;
        }else{
            printf("あいこでしょ\n");
        }
    }
    

    return 0;    
}
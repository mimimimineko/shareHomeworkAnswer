#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int kadai41(void);

int main(void){
    kadai41();
    return 0;
}


int kadai41(void){
    srand((unsigned)time(NULL));
    int array[9][9];
    
    for(int y=0;y<9;y++){
        for(int x=0;x<9;x++){
            ///passが4桁になるまで繰り返す
            int pass=rand();
            /*
            while(pass>9999){
            pass=rand();    
            }
            //4桁のpassを配列に代入
            */
            array[x][y]=pass%10;
        }
    }


    printf(" |1|2|3|4|5|6|7|8|9|\n");
    printf("-");
    for(int i=1;i<=9;i++){
        printf("+-");
    }
    printf("+-\n");




    for(int y=0;y<9;y++){
        printf("%d|",y+1);
        for(int x=0;x<9;x++){
            printf("%d|",array[x][y]);
        }
        printf("\n");
    }
    int passwdX,passwdY,option;
    printf("行：");
    scanf("%d",&passwdY);
    printf("列：");
    scanf("%d",&passwdX);
    printf("方向[1:右，2:下]：");
    scanf("%d",&option);
    if(option==1){
        if(passwdX>6){
            printf("暗証番号は生成できません");
        }else{
            printf("暗証番号は %d%d%d%d です\n",array[passwdX-1][passwdY-1],array[passwdX][passwdY-1],array[passwdX+1][passwdY-1],array[passwdX+2][passwdY-1]);
        }
    }else if(option==2){
        if(passwdY>6){
            printf("暗証番号は生成できません");
        }else{
            printf("暗証番号は %d%d%d%d です\n",array[passwdX-1][passwdY-1],array[passwdX-1][passwdY],array[passwdX-1][passwdY+1],array[passwdX-1][passwdY+2]);
        }
    }else{
        printf("ERROR");
    }

    return 0;
}
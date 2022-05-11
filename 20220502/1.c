#include<stdio.h>
#include <stdlib.h>
#include <time.h>


//srand((unsigned)time(NULL));  /* 乱数のseed（種）の設定 */
//n = rand(); /* 乱数生成 */



int main(void){
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
            array[x][y]=pass%10000;
        }
    }


    printf(" |   1|   2|   3|   4|   5|   6|   7|   8|   9|\n");
    printf("-");
    for(int i=1;i<=9;i++){
        printf("+----");
    }
    printf("+-\n");




    for(int y=0;y<9;y++){
        printf("%d|",y+1);
        for(int x=0;x<9;x++){
            printf("%04d|",array[x][y]);
        }
        printf("\n");
    }
    int passwdX,passwdY;
    printf("行：");
    scanf("%d",&passwdY);
    printf("列：");
    scanf("%d",&passwdX);
    printf("暗証番号は %04d です\n",array[passwdX-1][passwdY-1]);

    return 0;
}
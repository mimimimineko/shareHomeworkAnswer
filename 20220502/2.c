#include<stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
    srand((unsigned)time(NULL));
    int array[9][9];

    for(int y=0;y<9;y++){
        for(int x=0;x<9;x++){
            int pass=rand()%10000;
            for(int y2=0;y2<=y;y2++){
                for(int x2=0;x2<x;x2++){
                    if(pass==array[x2][y2]){
                        pass=rand()%10000;
                        x2=0;
                        y2=0;
                    }
                }
            }
            array[x][y]=pass;
        }
    }


  /*
    for(int y=0;y<9;y++){
        for(int x=0;x<9;x++){
            int a=array[x][y];

            for(int y2=0;y2<9;y2++){
                for(int x2=0;x2<9;x++){
                    if(x==x2&&y==y2){
                        continue;
                    }
                    if(a==array[x2][y2]){
                        array[x2][y2]=rand()%10000;
                    }
                }
            }
        }
    }
*/



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
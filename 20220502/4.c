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
    printf("方向[1:上，2:下，3:左，4:右]：");
    scanf("%d",&option);
    int passwd1,passwd2,passwd3,passwd4;

    passwdY--;
    passwdX--;
    
    if(option==4){
        int overPass=4-(8-passwdX);
        for(int i=1;overPass>=0;overPass--){
            if(i==1) passwd4=array[overPass-2][passwdY];
            if(i==2) passwd3=array[overPass-2][passwdY];
            if(i==3) passwd2=array[overPass-2][passwdY];
            i++;
        }
        for(int j=1;passwdX<9;passwdX++){
            if(j==1) passwd1=array[passwdX][passwdY];
            if(j==2) passwd2=array[passwdX][passwdY];
            if(j==3) passwd3=array[passwdX][passwdY];
            if(j==4) passwd4=array[passwdX][passwdY];
            j++;
        }
    }else if(option==2){
        int overPass=4-(8-passwdY);
        for(int i=1;overPass>=0;overPass--){
            if(i==1) passwd4=array[passwdX][overPass-2];
            if(i==2) passwd3=array[passwdX][overPass-2];
            if(i==3) passwd2=array[passwdX][overPass-2];
            i++;
        }
        for(int j=1;passwdY<9;passwdY++){
            if(j==1) passwd1=array[passwdX][passwdY];
            if(j==2) passwd2=array[passwdX][passwdY];
            if(j==3) passwd3=array[passwdX][passwdY];
            if(j==4) passwd4=array[passwdX][passwdY];
            j++;
        }
    }else if(option==1){
        int overPass=4-passwdY-1;
        if(overPass==1){
            passwd4=array[passwdX][8];
            passwd3=array[passwdX][0];
            passwd2=array[passwdX][1];
            passwd1=array[passwdX][2];
        }else if(overPass==2){
            passwd4=array[passwdX][7];
            passwd3=array[passwdX][8];
            passwd2=array[passwdX][0];
            passwd1=array[passwdX][1];
        }else if(overPass==3){
            passwd4=array[passwdX][6];
            passwd3=array[passwdX][7];
            passwd2=array[passwdX][8];
            passwd1=array[passwdX][0];
        }else{
            for(int j=1;passwdY<9;passwdY--){
                if(j==1) passwd1=array[passwdX][passwdY];
                if(j==2) passwd2=array[passwdX][passwdY];
                if(j==3) passwd3=array[passwdX][passwdY];
                if(j==4) passwd4=array[passwdX][passwdY];
                j++;
            }
        }
    }else if(option==3){
        int overPass=4-passwdX-1;
        printf("%d\n",overPass);
        if(overPass==1){
            passwd4=array[8][passwdY];
            passwd3=array[0][passwdY];
            passwd2=array[1][passwdY];
            passwd1=array[2][passwdY];
        }else if(overPass==2){
            passwd4=array[7][passwdY];
            passwd3=array[8][passwdY];
            passwd2=array[0][passwdY];
            passwd1=array[1][passwdY];
        }else if(overPass==3){
            passwd4=array[6][passwdY];
            passwd3=array[7][passwdY];
            passwd2=array[8][passwdY];
            passwd1=array[0][passwdY];
        }else{
            for(int j=1;passwdX<9;passwdX--){
                if(j==1) passwd1=array[passwdX][passwdY];
                if(j==2) passwd2=array[passwdX][passwdY];
                if(j==3) passwd3=array[passwdX][passwdY];
                if(j==4) passwd4=array[passwdX][passwdY];
                j++;
            }
        }
    }else{
        printf("ERROR\n");
    }

    printf("暗証番号は %d %d %d %d です\n",passwd1,passwd2,passwd3,passwd4);
    return 0;
}
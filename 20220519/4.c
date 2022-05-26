#include<stdio.h>

int main(void){
    char str[5][128];
    int  mojisuu[5]={0};
    int mojiretsusuu;
    int mojisuuMax=0;

    printf("文字列数：");
    scanf("%d",&mojiretsusuu);


/////入力と文字列長出す
    for(int i=0;i<mojiretsusuu;i++){
        printf("文字列[%d]：",i);
        scanf("%s",str[i]);
        int len=0;
        while(str[i][len]!='\0'){
            mojisuu[i]++;
            len++;
            if(mojisuuMax<mojisuu[i]){
                mojisuuMax=mojisuu[i];
            }
        }
    }

    for(int i=0;i<mojiretsusuu;i++){
        if(mojisuuMax==mojisuu[i]){
            printf("%s",str[i]);
            printf("(%d)\n",mojisuuMax);
        }
    }

    printf("\n");
    return 0;
}
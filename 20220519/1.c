#include<stdio.h>
int main(void){
    char moji;
    char str[128];
    int status;

    printf("文字：");
    scanf("%c",&moji);
    printf("文字列：");
    scanf("%s",str);

    for(int i=0; str[i]!='\0'  && i<128; i++){
        if(str[i]==moji){
            status=1;
            break;
        }   
    }

    if(status==0){
        printf("含まれません\n");
    }else{
        printf("含まれます\n");
    }
    return 0;
}
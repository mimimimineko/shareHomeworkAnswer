#include<stdio.h>
int extract_consonant(const char str[]);
int main(void){
    char str[128];

    printf("文字列：");
    scanf("%s",str);


    extract_consonant(str);

    printf("\n");
    return 0;
}


int extract_consonant(const char str[]){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }


    for(int i=len-1;i>=0;i--){
        putchar(str[i]);
    }
    return 0;
}
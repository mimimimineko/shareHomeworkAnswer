#include<stdio.h>
int extract_consonant(const char str[]);
int main(void){
    char str[128];

    printf("文字列：");
    scanf("%s",str);

    printf("子音列：");

    extract_consonant(str);

    printf("\n");
    return 0;
}


int extract_consonant(const char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='a'&&str[i]!='i'&&str[i]!='u'&&str[i]!='e'&&str[i]!='o'){
            putchar(str[i]);
        }
    }
    return 0;
}
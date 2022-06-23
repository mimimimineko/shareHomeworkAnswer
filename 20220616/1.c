#include<stdio.h>

int chrCount(const char *p,char c);
int main(void){
    char c,str[20],*p;
    p=str;
    printf("c：");
    scanf("%s",&c);
    printf("str：",str);
    scanf("%s",str);
    printf("%d個\n",chrCount(p,c));
    return 0;
}

int chrCount(const char *p,char c){
    int num=0;
    while(*p!='\0'){
        if(*p==c){
            num++;
        }
        p++;
    }
    return num;
}
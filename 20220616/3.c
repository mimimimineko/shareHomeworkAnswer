#include<stdio.h>

void strMix(char *str1,char *str2,char *str3);

int main(void){
    char str1[20],str2[20],str3[20];
    char *p1=str1,*p2=str2,*p3=str3;
    printf("str1：");
    scanf("%s",str1);
    printf("str2：");
    scanf("%s",str2);
    strMix(p1,p2,p3);
    while(*p3){
        putchar(*p3);
        p3++;
    }
    putchar('\n');
    return 0;
}

void strMix(char *str1,char *str2,char *str3){
    while(*str1!='\0'||*str2!='\0'){
        if(*str1!='\0'){
            *str3=*str1;
            str1++;
            str3++;
        }
        if(*str2!='\0'){
            *str3=*str2;
            str2++;
            str3++;
        }
    }
    *str3='\0';
}
#include<stdio.h>
void strSep(char *str1,char *str2,char *str3);
int main(void){
    char str1[20],str2[20],str3[20]={'\n'};
    char *p1=str1,*p2=str2,*p3=str3;
    printf("入力：");
    scanf("%s",str1);
    strSep(p1,p2,p3);
    printf("str2：");
    while(*p2){
        putchar(*p2);
        p2++;
    }    
    printf("\nstr3：");
    while(*p3){
        putchar(*p3);
        p3++;
    }
    putchar('\n');
    return 0;
}

void strSep(char *str1,char *str2,char *str3){
    while(*str1!='\0'){
        if( *str1=='0'||
            *str1=='1'||
            *str1=='2'||
            *str1=='3'||
            *str1=='4'||
            *str1=='5'||
            *str1=='6'||
            *str1=='7'||
            *str1=='8'||
            *str1=='9'){
            *str3=*str1;
            str3++;
        }else{
            *str2=*str1;
            str2++;
        }
        str1++;
    }
    if(*str2!='\0'){
        *str2='\0';
    }
    if(*str3!='\0'){
        *str3='\0';
    }
}
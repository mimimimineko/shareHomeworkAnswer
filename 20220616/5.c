#include <stdio.h>

char* delChar(char*, char);

int main(void){
    char str[30],c;
    char *p_str=str;
    printf("c：");
    scanf("%s", &c);
    printf("str：");
    scanf("%s",str);
    printf("出力：%s\n",delChar(p_str,c));
    return 0;
}

char* delChar(char *str, char c){
    char *strFirst=str;
    while(*str!='\0'){
        char *strNow = str;
        if(*str==c){
            while(*str!='\0'){
                *str=*(str+1);
                str++;
            }
            str=strNow;
            continue;
        }else{
            str++;
        }
    }
    return strFirst;
}
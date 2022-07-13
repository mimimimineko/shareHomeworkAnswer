#include <stdio.h>

int isSameChars (char *s, char c );


int main(void){
    char c, str[20];
    
    printf("文字：");
    scanf("%c",&c);
    getchar();
    
    printf("文字列：");
    scanf("%s",str);

    if(isSameChars(str,c)){
        printf("出力：YES\n");
    }else{
        printf("出力：NO\n");
    }


    return 0;
}

int isSameChars (char *s, char c ){
    int result=0;
    while ( *s!= '\0'){
        if(*s==c){
            s++;
            continue;
        }else{
            return 0;
        }
    }
    return 1;
}
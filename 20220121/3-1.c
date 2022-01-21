#include<stdio.h>
int main (void){
    int count=0;
    int ch;
    printf("入力↓↓↓\n");
    while((ch=getchar()) != EOF ){
        if(ch=='\n'){
            count ++;
        }
    }
    printf("%d\n",count);
    return 0;
}
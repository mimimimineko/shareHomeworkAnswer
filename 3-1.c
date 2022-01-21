#include<stdio.h>
int main (void){
    int count=0;
    int ch;
    printf("入力↓↓↓\n");
    while((ch=getchar()) != EOF ){
        if(ch=='\n'){
            count ++;
        }
    }3-1
    printf("%d\n",count);
    return 0;
}
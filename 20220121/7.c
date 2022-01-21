#include<stdio.h>

int main(void){
    int ch;
    while((ch=getchar())!=EOF){
        if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'){
            ch+=4;
        }else if(ch=='6'||ch=='7'||ch=='8'||ch=='9'){
            ch-=6;
        }
        putchar(ch);
    }
    return 0;
}
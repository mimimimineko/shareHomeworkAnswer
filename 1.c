#include<stdio.h>

int main(void){
    float f=0;
    int   i=0;
    for(int loop=0;loop<20000;loop++){
        f=f+0.01;
        i++;
        printf("%7.2f  %7d\n",f,i/100);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[]){
    double sum=0 ;
    if( argc<2 ){
        printf("引数が不足\n");
    }else{
        for(int i=1; i<argc; i++){
            sum += atoi(argv[i]);
        }
        printf("sum = %.2f\nave = %.2f\n",sum,sum/argc);
    }
    return 0;
}
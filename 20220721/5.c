#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    char option[4];
    int op=0,checkFile=0;;
    FILE *input;
    char c_input[30];
    for(int i=1;i < argc ; i++){
        if(strstr(argv[i],"/S") != NULL || strstr(argv[i],"/L") != NULL || strstr(argv[i],"/R") != NULL){
            option[op]=argv[i][1];
            op++;
        }else{
            input = fopen(argv[i],"r");
            if(input==NULL){
                puts("ファイル読み込みエラーまたは引数エラー");
            }
            fgets(c_input, 30 ,input);
            checkFile++;
        }
    }
    if(checkFile==0){
        puts("引数が不足");
    }else{
        for(;op > 0;op--){
            if(option[op-1]=='S'){
                for(int i=0;c_input[i] != '\0';i++){
                    c_input[i]=tolower(c_input[i]);
                }
            }else if(option[op-1]=='L'){
                for(int i=0;c_input[i] != '\0';i++){
                    c_input[i]=toupper(c_input[i]);
                }
            }else if(option[op-1]=='R'){
                int j=0;
                char tmp[30];
                for(j=0;c_input[j] != '\0'; j++){
                    tmp[j]=c_input[j];
                }
                int i;
                for(i=0; i<j;i++){
                    c_input[i]=tmp[j-i-1];
                }
                c_input[i]='\0';
            }
        }
        printf("%s\n",c_input);
    }
    return 0;
}
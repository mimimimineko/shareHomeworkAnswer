#include <stdio.h>
#include <string.h>

#define LINE 20
#define COLUMN 1500

void grep(char *phrase[], FILE *input);
int searchLine(char *phrase[], char input[]);

int main (int argc, char *argv[]){
    if ( argc < 3){
        printf("引数が不足\n");
    }else if( argc>4){
        printf("引数がおおすぎるっぴ\n");
    }else{
        FILE *input;
        input = fopen(argv[2] , "r");
        if(input == NULL){
            printf("ファイルが開けません\n");
        }else{
            grep(&argv[1],input);
            fclose(input);
        }
    }
    return 0;
}

void grep(char *phrase[], FILE *inputfile){
    char input[LINE][COLUMN];
    int i;
    for(i=0; i<LINE  ;i++){
        char *result = fgets(input[i],COLUMN, inputfile);
        if(result==NULL){
            break;
        }
        if(searchLine(phrase,input[i])==1){
            printf("%d: %s",i+1,input[i]);
        }

    }
}

int searchLine(char *phrase[], char input[]){
    int i;
    for (i=0;i<COLUMN; i++){
        if(input[i]=='\n' ||input[i] =='\0'){
            break;
        }
    }
    if(strstr(input , *phrase) != NULL ){
        return 1;
    }else{
        return 0;
    }
}
#include <stdio.h>
#include <string.h>

#define NUM 20

struct info{
    int id;
    char name[20];
    char post[20];
    int year;
    int monay;
};

int main (int argc ,char *argv[]){
    if(argc<2){
        printf("引数が少なすぎます\n");
    }else if(argc >2){
        printf("引数が多すぎます\n");
    }else{
        struct info info[NUM];
        FILE *input = fopen(argv[1],"r");
        if(input==NULL){
            printf("ファイルを開けません\n");
        }else{
            int i;
            for(i=0;1;i++){
                char tmp[100];
                char* j= fgets(tmp,100,input);
                if(j==NULL){
                    break;
                }
                sscanf(tmp,"%d%s%s%d%d",&info[i].id,info[i].name,info[i].post,&info[i].year,&info[i].monay);
                printf("%d\t%s\t%s\t%d\t%d\n",info[i].id,info[i].name,info[i].post,info[i].year,info[i].monay);
            }
            printf("入力：");
            char name[20];
            scanf("%s",name);
            int line;
            for(int j=0;1;j++){
                if(strcmp(info[j].name,name)==0){
                    printf("%d\t%s\t%s\t%d\t%d\n",info[j].id,info[j].name,info[j].post,info[j].year,info[j].monay);
                    break; 
                }
                if(j>NUM || j>i){
                    printf("該当するデータはありません\n");
                    break;
                }
            }
            fclose(input);
        }
    }
    return 0;
}
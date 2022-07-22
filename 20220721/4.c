#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    if(argc!=3){
        puts("引数が超過または不足しています。");
    }else{
        FILE *file1=fopen(argv[1],"r");
        if(file1 == NULL){
            puts("読み込み失敗 ファイル１");
        }else{
            FILE *file2=fopen(argv[2],"r");
            if(file2 == NULL){
                puts("読み込み失敗 ファイル２");
            }else{
                char c_file1[20][100],c_file2[20][100];
                int line1,line2;
                for(line1=0; 1 ; line1++){
                    char *file1in = fgets(c_file1[line1],100,file1);
                    if(file1in == NULL){
                        break;
                    }
                }
                for(line2=0; 1 ; line2++){
                    char *file2in = fgets(c_file2[line2],100,file2);
                    if(file2in == NULL){
                        break;
                    }
                }
                for(int i=0; 1 ; i++){
                    if(i >= line1 || i>= line2){
                        break;
                    }
                    if(strcmp(c_file1[i],c_file2[i])!=0){
                        printf("--%s\n%d：%s%s\n--%d：%s",argv[1],i+1,c_file1[i],argv[2],i+1,c_file2[i]);
                    }
                }
            }
            fclose(file1);
            fclose(file2);
        }
    }
    return 0;
}
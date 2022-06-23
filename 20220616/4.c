#include<stdio.h>

int strKeynum(char *str,char *key);

int main(void){
    char str[40],key[20];
    char *p_str=str,*p_key=key;
    printf("str：");
    scanf("%s",str);
    printf("key：");
    scanf("%s",key);
    printf("%d個含まれている\n",strKeynum(p_str,p_key));
    return 0;
}

int strKeynum(char *str,char *key){
    int num=0;
    int keyChar=0;
    char *keyFirst=key,*strNow=str;
    while(*key!='\0'){
        keyChar++;
        key++;
    }

    while(*str!='\0'){
        int i=0;      //ループ回数リセット
        strNow=str;
        key=keyFirst; //keyリセット
        printf("%s\n",str);

        // 1文字目が同じだったら
        if(*key==*str){
            // 違う文字が出てくるまで繰り返す
            for(i=0;i<keyChar||*str!='\0';i++){
                // keyの文字数内で違う文字があればループを抜ける
                if(*key!=*str){
                    break;
                }
                // keyの文字数と同じ回数だけループしたらnumをインクリメント
                if(i==keyChar-1){
                    num++;

                }
                key++;
                str++;
            }
            str=strNow;
        }
        str++;
    }
    return num;
}
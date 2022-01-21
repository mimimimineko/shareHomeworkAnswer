#include <stdio.h>

////呼び出し回数表示////
void put_count(void){
    static int a;/////aに0を代入するのはmain関数の実行のはじめだけ////
    printf("%d",++a);
}

int main(void){
    int i;
    printf("呼び出し回数入力：");
    scanf("%d",&i);
    for(int x=1;x<=i;x++){
        printf("put_count: ");
        put_count();////回数の表示///
        printf(" 回目\n");
    }
    return 0;
}
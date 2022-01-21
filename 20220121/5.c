#include<stdio.h>

// int 型の引数 noを受け取り、これまでに受け取った no の積を返す関数
int productSoFar(int no){
    static int seki=1;
    if(no==0){
        int tmp;
        tmp=seki;
        seki=1;
        return tmp;
    }else{
        seki=seki*no;
        return seki;
    }
}

int main (void){
    int select=0;
    while(select!=9){
        int no;
        printf("整数を入力してください: ");
        scanf("%d",&no);
        printf("これまでの入力の積は %d です。\n",productSoFar(no));

        ////入力継続OR終了
        printf("入力を続けますか? (Yes -> 0/No -> 9): ");
        scanf("%d",&select);

    }
    printf("終了します。\n");
    return 0;
}
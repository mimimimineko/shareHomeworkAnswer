#include<stdio.h>
#include<limits.h>

//配列 vc の中の要素の最大値を返す
//引数として配列の要素数を受け取らない
int maxOfArray(const int vc[]){
    //ｘは最大値
    int x = vc[0];
    for(int loop=0;vc[loop]!=INT_MIN;loop++){
        if(x<vc[loop]){
            x=vc[loop];
        }
    }
    return x;
}

int main(void){
    int test1[] = {10, 11, 12, 7, -16, -15, 6, INT_MIN};   // maxOfArray(test1) は 12
    int test2[] = {8, 14, 14, -8, 9, 5, 24, -4, INT_MIN};  // maxOfArray(test2) は 24
    int test3[] = {INT_MIN};                               // maxOfArray(test3) は INT_MIN
    int test4[] = {-19, INT_MIN};                          // maxOfArray(test4) は -19
    printf("test1 : %d\n",maxOfArray(test1));
    printf("test2 : %d\n",maxOfArray(test2));
    printf("test3 : %d\n",maxOfArray(test3));
    printf("test4 : %d\n",maxOfArray(test4));
    return 0;
}
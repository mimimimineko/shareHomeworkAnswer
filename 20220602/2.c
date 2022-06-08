#include <stdio.h>

void print_array(int *p);

int main(void) {
    int arr[] = {12, 7, 33, 9, 15, 28, 11, 5, 38, 25, -1}; 

    print_array(&arr[0]);
    print_array(arr);   /* 配列名を渡しても同じ値になることを確認する */

    return 0;
}



// 〇関数の仕様
// 返却値型：返却値に基づいて設定
// 関数名　：print_array
// 引数１　： int *p　配列の先頭要素を指すポインタ
// 機能　　：ポインタを用いて配列の先頭から順に画面出力する．
// 返却値　：なし
// ※ユーザ関数内の配列操作は，添え字演算子 []ではなく，ポインタを活用して実装すること．
void print_array(int *p){
    for(int i=0;*(p+i)!=-1;i++){
        printf("%d  ",*(p+i));
    }
    putchar('\n');
}
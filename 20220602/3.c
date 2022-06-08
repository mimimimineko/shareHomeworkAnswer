#include <stdio.h>

void split_arr(int *arr1,int *arr2,int *arr3);
void print_array(int *p);

int main(void) {
    int arr[] = {12, 7, 33, 9, 15, 28, 11, 5, 38, 25, -1}; 
    int a[10], b[10];

    split_arr(arr, a, b);

    /* 課題8_2で実装した関数を利用して確認 */
    print_array(a);
    print_array(b);

    return 0;
}




// 〇関数の仕様
// 返却値型：返却値に基づいて設定
// 関数名　：split_arr
// 引数１　：int *arr1　オリジナル配列arrの先頭要素を指すポインタ
// 引数２　：int *arr2　分配した要素を入れる1つ目の配列aの先頭要素を指すポインタ
// 引数３　：int *arr3　分配した要素を入れる2つ目の配列bの先頭要素を指すポインタ
// 機能　　：ポインタを利用して，配列arrの各要素を交互に配列aと配列bに分配する（1つ目は配列aに入れる）．なお，配列a と配列bの末尾には，エンドマーカーとして，-1 を追加すること．
// 返却値　：なし
// ※ユーザ関数内の配列操作は，添え字演算子 []ではなく，ポインタを活用して実装すること．
void split_arr(int *arr1,int *arr2,int *arr3){
    int i,j;
    for(i=0; *(arr1+i)!=-1;i++){
        if(i%2==0){
            *(arr2+(j))=*(arr1+i);
        }else{
            *(arr3+(j))=*(arr1+i);
            j++;
        }
    }
    *(arr2+j)=-1;
    *(arr3+j)=*(arr1+i);
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
#include<stdio.h>


void calcOdd(int *p_arr,int *p_oddNum,int *p_oddSum);

int main(void){
    printf("データ：");
    int a=1;
    int arr[11]={0};
    int i=0;
    for(i=0;i<10;i++){
        scanf("%d",&a);
        arr[i]=a;
        if(a==0){
            break;
        }
    }
    arr[i]=0;

    int oddNum=0;
    int oddSum=0;

    int *p_oddNum=&oddNum;
    int *p_oddSum=&oddSum;
    int *p_arr=arr;

    calcOdd(p_arr,p_oddNum,p_oddSum);
    printf("奇数の個数：%d\n",oddNum);
    printf("正の奇数の総和：%d\n",oddSum);

    return 0;
}



// 〇関数の仕様
// 返却値型：返却値に基づいて設定
// 関数名　：calcOdd
// 引数１　：整数を格納した int型の配列要素へのポインタ
// 引数２　：ポインタ p_oddNum
// 引数３　：ポインタ p_oddSum
// 機能　　：配列中の奇数の個数と正の奇数の個数の総和を計算し，p_oddNum が指す変数に奇数の個数を，p_oddSum が指す変数に正の奇数の総和を代入
// 返却値　：なし
void calcOdd(int *p_arr,int *p_oddNum,int *p_oddSum){
    for(int i=0;*(p_arr+i)!=0;i++){
        if(*(p_arr)%2!=0){
            *p_oddNum+=1;
            *p_oddSum+=*(p_arr+i);
        }
    }
}
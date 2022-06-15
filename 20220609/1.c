#include <stdio.h>
#include <limits.h> // INT_MINの定義

int  *findNeg (int *ptr );

// 2種類の配列で動作チェックする
// int arr[] = {3,4,-3,2,0,-4,-9,7,-8,-6,3,4,INT_MIN}; 
int arr[] = {-2,9,0,-1,-2,-3,4,5,9,-6,INT_MIN};

int main(void) {
    int *p, *next;
    p = arr;  /* ポインタ p は配列の先頭要素を指す */
    while (1) {
        next = findNeg(p); /* findNeg関数の返却値はポインタなので，ポインタで受け取る */
        if (*next == INT_MIN) {
            break;
        }
        printf("%d番目に負の数 %dがあります\n", next-arr, *next);
        p=next+1;
    }
    return 0;
}

int  *findNeg (int *ptr ){
    while(1){
        if(*ptr<0){
            break;
        }
        ptr++;
    }
    return ptr;
}
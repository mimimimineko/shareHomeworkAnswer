#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define NUM 100  /*最大枚数*/

typedef struct _prika{
    int id;
    int money;
    int year;
    int month;
    int day;
    int secCode;
} D_prika;

int makeSecCode(D_prika data[],int a);

void makePreca(D_prika data[],int a);

void dumpPreca (D_prika data[],int a);

int main(void){

    D_prika data[NUM];

    int a;
    while(1){
        printf("発行枚数：");
        scanf("%d",&a);
        if(a>0&&a<=NUM){
            break;
        }else{
            printf("発行できるカード枚数は1~%d枚です。",NUM);
            continue;
        }
    }


    makePreca(data,a);
    dumpPreca(data,a);

    return 0;
}

int makeSecCode(D_prika data[],int a){

    srand((unsigned)time(NULL));  /* 乱数のseed（種）の設定 */
    // n = rand(); /* 乱数生成 */
    int n=rand()%10000;
    for(int i=0;i<a; i++){
        if(n==data[i].secCode){
            i=-1;
            n=rand()%10000;
        }
    }
    return n;
}

void makePreca(D_prika data[],int a){
    for(int i=0; i<NUM && i<a; i++){
        data[i].id=     i+1;
        data[i].money=  1000;
        data[i].year=   2026;
        data[i].month=  3;
        data[i].day=    31;
        data[i].secCode=makeSecCode(data,i+1);
    }
}

void dumpPreca (D_prika data[] ,int a){
    for(int i=0; i<NUM && i<a ; i++){
        printf("#%3d：%d，%d年%d月%d日，%04d\n",data[i].id,data[i].money,data[i].year,data[i].month,data[i].day,data[i].secCode);
    }
}
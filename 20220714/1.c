#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define NUM 100

typedef struct _prika{
    int id;
    int money;
    int year;
    int month;
    int day;
    int secCode;
} D_prika;


void printPreca(D_prika data);

void initPreca(D_prika *data);

int main(void){

    srand((unsigned)time(NULL));  /* 乱数のseed（種）の設定 */
    // n = rand(); /* 乱数生成 */



    D_prika data[NUM];

    // for(int i=0; i<NUM ; i++){
    //     data[i].id=     i+1;
    //     data[i].money=  1000;
    //     data[i].year=   2026;
    //     data[i].month=  3;
    //     data[i].day=    31;
    //     data[i].secCode=rand()%10000;
    // }
    initPreca(&data[0]);

    printPreca(data[0]);

    return 0;
}

void printPreca(D_prika data){
    printf("#%3d：%d，%d年%d月%d日，%04d\n",data.id,data.money,data.year,data.month,data.day,data.secCode);
}

void initPreca(D_prika *data){

    for(int i=0; i<NUM ; i++){
        data[i].id=     i+1;
        data[i].money=  1000;
        data[i].year=   2026;
        data[i].month=  3;
        data[i].day=    31;
        data[i].secCode=rand()%10000;
    }

}
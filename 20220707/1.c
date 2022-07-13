#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define NUM 100

int main(void){

    srand((unsigned)time(NULL));  /* 乱数のseed（種）の設定 */
    // n = rand(); /* 乱数生成 */

    typedef struct _prika{
        int id;
        int money;
        int year;
        int month;
        int day;
        int secCode;
    } D_prika;

    D_prika data[NUM];

    for(int i=0; i<NUM ; i++){
        data[i].id=     i+1;
        data[i].money=  1000;
        data[i].year=   2026;
        data[i].month=  3;
        data[i].day=    31;
        data[i].secCode=rand()%10000;
    }

    int searchId=1;
    while(1){
        printf("ID：");
        scanf("%d",&searchId);
        if(searchId>NUM ||searchId <1){
            printf("IDは1～100までの数値を入力してください\n");
        }else{
            break;
        }
    }
    printf("金額：%d\n",data[searchId-1].money);
    printf("有効期限：%4d %2d %2d\n",data[searchId-1].year ,data[searchId-1].month,data[searchId-1].day);
    printf("セキュリティコード：%04d\n",data[searchId-1].secCode);

    return 0;
}
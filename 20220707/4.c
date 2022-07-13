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

int payPreca(D_prika data[],int a);

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

    int pay=payPreca(data,a);

    if(pay==-1){
        printf("---\n支払い失敗\n");
    }else{
        printf("--\n支払い完了\n#%d：%d，%d年%d月%d日，%d\n",data[pay-1].id,data[pay-1].money,data[pay-1].year,data[pay-1].month,data[pay-1].day,data[pay-1].secCode);
    }

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

int payPreca(D_prika data[],int a){
    int id,value,price;
    printf("---\n支払い処理\nID：");
    while(1){
        scanf("%d",&id);    
        if(id>0&&id<=a){
            break;
        }else{
            printf("1～%dまでの正しい値を入力してください\n",a);
            continue;
        }
    }

    printf("セキュリティコード：");
    scanf("%d",&value);
    printf("金額：");
    scanf("%d",&price);

    if(data[id-1].secCode==value){
        if(data[id-1].money<price){
            return -1;
        }else{
            data[id-1].money -=price;
            printf("残高：%d円\n",data[id-1].money);
            return id;
        }
    }else{
        return -1;
    }

}
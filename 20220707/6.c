#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define NUM 100  /*最大枚数*/

typedef struct _date{
    int year;
    int month;
    int day;    
}D_date;

typedef struct _prika{
    int id;
    int money;
    D_date limitDate;
    int secCode;
} D_prika;

int makeSecCode(D_prika data[],int a);
void makePreca(D_prika data[],int a);
void dumpPreca (D_prika data[],int a);
int payPreca(D_prika data[],int a);
int chargePreca(D_prika data[],int a);
void printPreca(D_prika data);

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

    int check;

    printf("0：支払い or 1：チャージ ？ ");
    scanf("%d",&check);
    if(check=0){
        int pay=payPreca(data,a);
        if(pay==-1){
            printf("---\n支払い失敗\n");
        }else{
            printf("--\n支払い完了\n");
            printPreca(data[pay-1]);
        }
    }else{
        int pay=chargePreca(data,a);
        if(pay==-1){
            printf("---\nチャージ失敗\n");
        }else{
            printf("--\nチャージ完了\n");
            printPreca(data[pay-1]);
        }
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
        data[i].limitDate.year=   2026;
        data[i].limitDate.month=  3;
        data[i].limitDate.day=    31;
        data[i].secCode=makeSecCode(data,i+1);
    }
}

void dumpPreca (D_prika data[] ,int a){
    for(int i=0; i<NUM && i<a ; i++){
        printPreca(data[i]);
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


int chargePreca(D_prika data[],int a){
    int id,value,price;
    printf("---\nチャージ処理\nID：");
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
        data[id-1].money +=price;
        printf("残高：%d円\n",data[id-1].money);
        return id;
    }else{
        return -1;
    }

}

void printPreca(D_prika data){
    printf("#%3d：%d，%d年%d月%d日，%04d\n",data.id,data.money,data.limitDate.year,data.limitDate.month,data.limitDate.day,data.secCode);
}
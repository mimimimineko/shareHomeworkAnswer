#include <stdio.h>
#include <string.h>

#define NUM 5

typedef struct _salaly{
    int basicPay;
    int housinglPay;
    int commutingPay;
    int supportFamilyPay;
}D_salaly;

// typedef struct _basicInfo{
//     int id;
//     char name[20];
//     char post[20];
//     int workYearAgo;
//     int howCommuting;
// }D_basicInfo;

typedef struct _allInfo{
    // D_basicInfo basicInfo;
    int id;
    char name[20];
    char post[20];
    int workYearAgo;
    char howCommuting[20];
    D_salaly salaly;
}D_allInfo;

int checkPost();
int totalPay(D_allInfo allInfo);

// char postList[5]={"s_chief","chief","member","teacher","Other"};


int main(void){

    D_allInfo allInfo[NUM]={
        {127, "Humphrey", "s_chief", 21, "Bus", {400000, 10000, 4000, 25000}},
        {204, "Cary", "s_chief", 15, "Train", {350000, 10000, 5000, 15000}},
        {255, "James", "chief", 12, "Bus", {300000, 0, 2000, 0}},
        {272, "Katharine", "member", 10, "Walk", {270000, 27000, 0, 0}},
        {300, "Bette", "member", 5, "Train", {240000, 1000, 15000, 0}}
    };
    char post[20];
    printf("役職：");
    scanf("%s",post);
    int n=0;
    for(int i=0; i<NUM; i++){
        if(strcmp(post, allInfo[i].post)==0){
            printf("%d %s %s %d %s %d\n",
                allInfo[i].id,
                allInfo[i].name,
                allInfo[i].post,
                allInfo[i].workYearAgo,
                allInfo[i].howCommuting,
                totalPay(allInfo[i])
            );
            n++;
        }
    }
    if(n==0){
        puts("該当なし");
    }

    return 0;
}

// int checkPost(){
//     int post;

//     do{
//         printf("役職：");
//         scanf("%d",&post);
//     }while(post<=5 &&post >0);

//     return post;
// }



int totalPay(D_allInfo allInfo){
    int totalPay=0;
    totalPay=
        allInfo.salaly.basicPay+
        allInfo.salaly.housinglPay+
        allInfo.salaly.supportFamilyPay+
        allInfo.salaly.commutingPay;
    return totalPay;
}
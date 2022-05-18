#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int func(int n,int arr[]);
int hoge(int n,int arr[]);
int check(int n,int answer[],int input[]);
int hitCheck(int n,int answer[],int input[]);

int main(void){
    printf("n：");
    int n;
    int answer[5];
    int input[5];
    int hit=0;
    scanf("%d",&n);
    printf("answer = ");
    func(n,answer);
    for(int i=0;i<n;i++){
        printf("%d ",answer[i]);
    }
    printf("\n");

    int a=1;
    for(int i=1;a=1;i++){
        hoge(n,input);
        int blow=check(n,answer,input);
        hit=hitCheck(n,answer,input);

        if(hit==n){
            printf("正解（%d回）\n",i);
            break;
        }else{
            printf("不正解：Hit数 = %d, Blow数 = %d\n続ける？（1：はい，2：いいえ）：",hit,blow);
            scanf("%d",&a);
        }
    }
}

int func(int n,int answer[]){
    srand((unsigned)time(NULL));
    for(int i=0;i<n;i++){
        int a=0;
        while(a==0){
            a=rand()%10;
        }
        answer[i]=a;
    }
}

int hoge(int n,int input[]){
    for(int i=0;i<n;i++){
        printf("n%d：",i+1);
        scanf("%d",&input[i]);
    }
}

int check(int n,int answer[],int input[]){
    int blow=0;
    for(int i=0;i<n;i++){
        if(input[i]==answer[i]){
            continue;
        }else{
            for(int j=0;j<n;j++){              
                if(input[i]==answer[j]){
                    blow++;
                    break;
                }
            }
        }
    }
    return blow;
}

int hitCheck(int n,int answer[],int input[]){
    int hit=0;
    for(int i=0;i<n;i++){
        if(answer[i]==input[i]){
            hit++;
        }
    }
    return hit;
}
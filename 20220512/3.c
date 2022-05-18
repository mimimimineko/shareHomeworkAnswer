#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int func(int n,int arr[]);
int hoge(int n,int arr[]);
int check(int n,int answer[],int input[]);

int main(void){
    printf("n：");
    int n;
    int answer[5];
    int input[5];
    scanf("%d",&n);
    printf("answer = ");
    func(n,answer);
    for(int i=0;i<n;i++){
        printf("%d ",answer[i]);
    }
    printf("\n");
    hoge(n,input);
    int hit=check(n,answer,input);
    printf("Hit数 = %d\n",hit);
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
    int hit=0;
    for(int i=0;i<n;i++){
        if(answer[i]==input[i]){
            hit++;
        }
    }
    return hit;
}
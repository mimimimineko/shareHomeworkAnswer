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
    int blow=check(n,answer,input);
    printf("Blow数 = %d\n",blow);
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
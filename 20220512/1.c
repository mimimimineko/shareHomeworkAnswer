#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int func(int n,int arr[]);
int main(void){
    printf("n：");
    int n;
    int arr[5];
    scanf("%d",&n);
    printf("result：");
    func(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int func(int n,int arr[]){
    srand((unsigned)time(NULL));
    for(int i=0;i<n;i++){
        int a=0;
        while(a==0){
            a=rand()%10;
        }
        arr[i]=a;
    }
}
#include<stdio.h>
int hoge(int n,int arr[]);
int main(void){
    int n;
    int arr[5];
    printf("n：");
    scanf("%d",&n);
    hoge(n,arr);
    printf("result：");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int hoge(int n,int arr[]){
    for(int i=0;i<n;i++){
        printf("n%d：",i+1);
        scanf("%d",&arr[i]);
    }
}
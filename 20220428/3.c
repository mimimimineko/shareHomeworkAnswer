#include<stdio.h>
int ckOrder(int n1,int n2,int n3);

int main(void){
    int n1,n2,n3;
    printf("n1: ");
    scanf("%d",&n1);
    printf("n2: ");
    scanf("%d",&n2);
    printf("n3: ");
    scanf("%d",&n3);
    int result=ckOrder(n1,n2,n3);
    printf("出力 : %+d\n",result);
    return 0;
}

int ckOrder(int n1,int n2,int n3){
    if(n1<=n2&&n2<=n3){
        return 1;
    }else if(n1>=n2&&n2>=n3){
        return -1;
    }else{
        return 0;
    }
}
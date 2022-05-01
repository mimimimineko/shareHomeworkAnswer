#include<stdio.h>
int ckLongestRun(int a[],int num);

int main(void){
    int x,y,i,a[20];
    printf("入力：");
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
        if(a[i]==-1){
            break;
        }
    }
    for(;i<20;i++){
        a[i]=-1;
    }
    printf("出力：%d\n",ckLongestRun(a,i));
    return 0;
}

int ckLongestRun(int a[],int num){
    int n=0,max=0;
    for(int i=0;i<num;i++){
        if(a[i]==1){
            n++;
            if(a[i+1]!=1){
                if(max<n){
                    max=n;
                }
                n=0;
            }
        }
    }
    return  max;
}
#include<stdio.h>
double syosuSet(int a[],double syosu,int n);

int main(void){
    double x;
    int n;
    int a[7];
    printf("x : ");
    scanf("%lf",&x);
    int seisu=x;
    double shosu=x-seisu;
    printf("n : ");
    scanf("%d",&n);
    syosuSet(a,shosu,n);
    printf("%d.",seisu);
    for(int y=0;y<n;y++){
        printf("%d",a[y]);
    }
    printf("\n");
    return 0;
}
double syosuSet(int a[],double syosu,int n){
    int i;
    for(i=0;i<=n;i++){
        
        if(i==0){
            syosu*=10;
        }else{
            syosu*=10;
            syosu-=a[i-1]*10;
        }
        a[i]=syosu;
    }
    if(a[n]>=5){
        a[n-1]+=1;
    }
    for(i=n;i<7;i++){
        a[i]=0;
    }
    return 0;
}
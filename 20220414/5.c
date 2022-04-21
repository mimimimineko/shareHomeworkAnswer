#include<stdio.h>
int main (void){
    int m,n;
    printf("入力1：");
    scanf("%d",&n);
    printf("入力2：");
    scanf("%d",&m);

//頭を使えばできるのかもしれないが、1回足りないことや多いことがあるため、やめた
    //int count1 = m/4 - n/4  +1;
    //int count2 = m/100 - n/100;
    //int count3 = m/400 - n/400;
    //printf("%d年から%d年までに閏年は%d回ある。\n",n,m,count1-count2+count3);


//計算量が多いが確実。。。
    int count=0;
    for(int i=n; i<=m; i++){
        if(i%4==0){
            if(i%100==0){
                if(i%400==0){
                    count++;
                    continue;
                }
                continue;
            }
            count++;
        }
    }
    printf("%d年から%d年までに閏年は%d回ある。\n",n,m,count);
}
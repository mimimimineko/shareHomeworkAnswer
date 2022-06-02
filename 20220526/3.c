#include<stdio.h>

void calcMaxMinAve (int tensu[],int *max,int *min,double *ave);
int calcMax(int tensu[]);
int calcMin(int tensu[]);
double calcAve(int tensu[]);



int main(void){

    int tensu[10]={0};


    int max,min;
    double ave;
    
    int *max_p=&max;
    int *min_p=&min;
    double *ave_p=&ave;



    // INPUT
    printf("入力\n");
    for(int i=1;i<=10;i++){
        printf("点数%d： ",i);
        scanf("%d",&tensu[i-1]);
        if(tensu[i-1]==-1){
            break;
        }
    }


    calcMaxMinAve(tensu,max_p,min_p,ave_p);

    // OUTPUT
    printf("出力　\n");
    printf("最大：%d\n",max);
    printf("最小：%d\n",min);
    printf("平均：%f\n",ave);
    return 0;
}


void calcMaxMinAve (int tensu[],int *max,int *min,double *ave){

    *max=calcMax(tensu);

    *min=calcMin(tensu);

    *ave=calcAve(tensu);
    
}

int calcMax(int tensu[]){
    int max=0;
    for(int i=0;tensu[i]!=-1&&i<10;i++){
        if(max<tensu[i]){
            max=tensu[i];
        }
    }
    // printf("%d",max);
    return max;
}

int calcMin(int tensu[]){
    int min=100;
    for(int i=0;tensu[i]!=-1&&i<10;i++){
        if(min>tensu[i]){
            min=tensu[i];
        }
    }
    // printf("%d",min);
    return min;
}

double calcAve(int tensu[]){
    double ave=0;
    int i;
    for(i=0;tensu[i]!=-1&&i<10;i++){
        ave+=tensu[i];
    }
    // printf("%f",ave);
    return ave/=i;
}
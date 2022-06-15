#include<stdio.h>
#include <limits.h> // INT_MINの定義



void min_maxArr (int datArray[][9],int resArray[][2],int colnum);
int  minArr (int *p);
int maxArr (int *p);


int main(void){

    int data[3][9] = {
        {3, 5, 7, 1, 2, 3, 4, 0, INT_MIN},
        {10, 100, 5, 1, 0, -10, 15, 9, INT_MIN},
        {0, 5, -1, -3, 8, 2, 6, -8, INT_MIN}
    };
    int res[3][2]={0};

    min_maxArr(data,res,3);
    for(int i=0;i<3;i++){
        printf("data%d の最小値：%d，最大値：%d\n",i+1,res[i][0],res[i][1]);
    }
    return 0;
}

void min_maxArr (int datArray[][9],int resArray[][2],int colnum){
    for(int i=0;i<colnum;i++){
        resArray[i][0]=minArr(datArray[i]);
        resArray[i][1]=maxArr(datArray[i]);
    }
}

int  minArr (int *p){
    int min=*p;
    while(1){
        if(*p==INT_MIN){
            break;
        }else if(min>*p){
            min=*p;
        }
        p++;        
    }
    return min;
}

int maxArr (int *p){
    int max=*p;
    while(1){
        if(*p==INT_MIN){
            break;
        }else if(max<*p){
            max=*p;
        }
        p++;        
    }
    return max;
}
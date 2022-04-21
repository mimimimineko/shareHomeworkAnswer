#include<stdio.h>
int main(void){
    //科目数
    int a;
    //単位数
    int b=0;
    printf("科目数: ");
    scanf("%d",&a);
    int v[10][4]={{0},{0}};
    for(int i=1;i<=a;i++){
        printf("科目%dの点数: ",i);
        scanf("%d",&v[i-1][0]);

        printf("科目%dの単位数: ",i);
        scanf("%d",&v[i-1][1]);
        b += v[i-1][1];

        //点数をもとに評価を判定し3(2) 列目に格納
        if(v[i-1][0] < 60){
            v[i-1][2] = 0;
        }else if(v[i-1][0] < 70){
            v[i-1][2] = 1;
        }else if(v[i-1][0] < 80){
            v[i-1][2] = 2;
        }else if(v[i-1][0] < 90){
            v[i-1][2] = 3;
        }else{
            v[i-1][2] = 4;
        }
    }
    for(int i=1;i<=a;i++){
        v[i-1][3] = v[i-1][1]*v[i-1][2];
    }
    double gpa=0;
    for( int i=1; i<=a; i++){
        gpa += v[i-1][3];
    }
    
    gpa /= b ;

    printf("GPA: %.3f\n",gpa);
    return 0;
}
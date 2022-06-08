#include<stdio.h>

void rotate(int *x,int *y, int *z);
void swap(int *nx, int *ny);

int main(void){
    int n1,n2,n3;
    int *x,*y,*z;

    x=&n1;
    y=&n2;
    z=&n3;

    // INPUT
    printf("入力\nn1：");
    scanf("%d",&n1);
    printf("n2：");
    scanf("%d",&n2);
    printf("n3：");
    scanf("%d",&n3);

    rotate(x,y,z);


    // OUTPUT
    printf("出力\nn1：%d\n",n1);
    printf("n2：%d\n",n2);
    printf("n3：%d\n",n3);
    return 0;
}

void swap(int *nx, int *ny) {
   int temp = *nx;

  *nx = *ny;
  *ny = temp;
}


void rotate(int *x,int *y, int *z){
    // y→x x→ｙ
    swap(x,y);
    // x→y→z z→y 
    swap(y,z);
}
#include <stdio.h>
// #include <string.h>

int strcmp(char *s1,char *s2);

char* dicSearch(char *dic[],int n,char *key);

int main(void){
    char *dic[7] = {
        "sunday", "monday", "tuesday", "wednesday",
        "thursday", "friday", "saturday" 
    };

    char key[20];

    while(1){
        printf("key：");
        scanf("%s",key);

        if(!strcmp(key, "XXXXX")){
            break;
        }
        
        char *ptr = dicSearch(dic,7,key);

        if(ptr==NULL){
            printf("ない\n");
        }else{
            printf("ある\n");
        }
    }

    return 0;
}


char* dicSearch(char *dic[],int n,char *key){

    for(int i=0;i<n;i++){
        if(!strcmp(dic[i],key)){
            return dic[i];
        }
    }

    // for(int i=0; i<n && i<7 ; i++){
    //     if(dic[i]==*key){
    //         return dic[i];
    //     }else{
    //         i++;
    //     }
    // }
    return NULL;

}

int strcmp(char *s1,char *s2){
    while(*s1!='\0'){
        if(*s1==*s2){
            s1++;
            s2++;
        }else{
            return 1;
        }
    }
    if(*s2=='\0'/**s2==0*/  /*!s2*/){
        return 0;
    }else{
        return 1;
    }
}
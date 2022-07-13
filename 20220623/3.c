#include <stdio.h>

void myPrintf (char *s1, char *s2);

int main(void) {
    // char *s1="Hello _! How are you, _?\n",*s2="Mike";
    // myPrintf(s1,s2);
    myPrintf("Hello _! How are you, _?\n", "Mike");
    myPrintf("Bonjour, _.\n", "Michel");
    myPrintf("_ _ _ _.\n", "Wow");
    myPrintf("YES, WE CAN!!\n", "Obama");
    return 0;
}

void myPrintf (char *s1, char *s2){
    while(*s1!='\0'){
        if(*s1=='_'){
            printf("%s",s2);
        }else{
            putchar(*s1);
            // printf("%c",*s1);
        }
        s1++;
    }
}
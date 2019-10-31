#include <stdio.h>

int myStrlen(char *str){
    int cnt=0;

    while(*str++) cnt++;

    return cnt;
}


int main()
{
    char str[] = "hi secure";

    printf("str len : %d\n", myStrlen(str));

    return 0;
}
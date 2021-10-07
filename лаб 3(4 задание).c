#include<stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    printf("%x\n",number);
    printf("%x", ~number);
    return 0;
}
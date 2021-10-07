#include<stdio.h>

int main(){
    int number_1;
    int number_2;
    scanf("%o",&number_1);
    scanf("%x",&number_2);
    char c = number_1 | number_2;
    printf("%d",c);
    return 0;
}
#include<stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    printf("16 syst : %x\n",number);
    printf("%o >> 3 == %o\n", number, number >> 3);
    return 0;
}

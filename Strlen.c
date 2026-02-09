#include<stdio.h>

int main(){

    char str[50];

    printf("Enter your string: ");
    scanf("%s",str);

    int len;

    for(len=0;str[len]!='\0';len++);
    printf("\nlength of the given string : %d",len);
    return 0;

}
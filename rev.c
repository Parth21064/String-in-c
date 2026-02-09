#include<stdio.h>

void swap(char a,char b){
    a=a^b;
    b=a^b;
    a=a^b;
}

int main(){

    char name[30];

    printf("Enter your name: ");
    scanf("%s",name);

    printf("%s",name);
    int len;
    for(len=0;name[len]!='\0';len++);

    for(int i=0;i<len/2;i++){
        name[i]=name[i]^name[len-i-1];
        name[len-i-1]=name[i]^name[len-i-1];
        name[i]=name[i]^name[len-i-1];
    }

    printf("%s",name);

    return 0;
}
#include<stdio.h>

int main(){
    char str[50];
    printf("Enter ur String: ");
    scanf("%s",str);

    int len,i;
    for(len=0;str[len]!='\0';len++);

    for(i=0;i<len/2;i++){
       if(str[i]!=str[len-i-1]){
        break;
       }
    }

    if(i==(len/2))
    printf("palindrome...");

    else
    printf("Not a palindrome..");


    return 0;
}
#include<stdio.h>

int main(){
    char str[23];

    printf("Enter your string: ");
    scanf("%s",str);

    int arr[200];
    int len;

    for(len=0;str[len]!='\0';len++);

    for(int i=0;i<len;i++){
        arr[str[i]]++;
    }

    for(int i=0;i<200;i++){
        if(arr[i]!=0){
            printf("%c : %d times",i,arr[i]);
        }
    }
    
    return 0;
}
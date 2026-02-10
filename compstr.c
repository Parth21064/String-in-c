#include<stdio.h>

int main(){
    char str1[20],str2[20];

    printf("Enter your string 1: ");
    scanf("%[^\n]%*c",str1);

    printf("Enter your string 2 to compare: ");
    scanf("%[^\n]%*c",str2);

    int i=0;
    int len1,len2;

    for(len1=0;str1[len1]!='\0';len1++);
    for(len2=0;str2[len2]!='\0';len2++);

    if(len1 == len2){

    while(str1[i]!='\0'){
        if(str1[i]!=str2[i]){
            break;
        }
        i++;
    }

    if(i==len1)
    printf("The strings are same..");

    else
    printf("The strings aren't same..");
    }
    else
    printf("The strings aren't same..");

    // printf("%s",str1);
    // printf("\n%s",str2);

    return 0;

}
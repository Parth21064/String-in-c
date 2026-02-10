#include<stdio.h>

int main(){
    char str1[45],str2[45];

    printf("Enter your string: ");
    scanf("%s",str1);
    // int len;
    // for(len=0;str1[len]!='\0';len++);
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';//have to end the string or it will put garbage values
    printf("%s",str1);
    printf("\n%s",str2);

    return 0;

}
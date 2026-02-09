#include<stdio.h>

int main(){
    char str[50];
    printf("Enter your string: ");
    scanf("%[^\n]%*c",str);
    int len;
    for(len=0;str[len]!='\0';len++);
    int vow,conc,spc;

    vow=0;
    conc=0;
    spc=0;

    for(int i=0;i<len;i++){

        if(str[i]=='a'|| str[i]=='e' ||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vow++;
        }
        else if(str[i]==' ')
        {
            spc++;
        }
        else
        conc++;
    }

    printf("vowel : %d,consonent: %d,space %d",vow,conc,spc);
    return 0;
}

#include<stdio.h>

int main(){

char str1[69];
char str2[69];
char str3[69];

gets(str1);
scanf("%s",str2);
scanf("%[^\n]%*c",str3);

puts(str1);
puts(str2);
puts(str3);

    return 0;
}
#include<stdio.h>

int main(){

char str1[9];
char str2[69];
// char str3[69];

fgets(str1,8,stdin);
scanf("%s",str2);
// scanf("%s[^\n]",str3);

puts(str1);
puts(str2);
// puts(str3);
    return 0;
}
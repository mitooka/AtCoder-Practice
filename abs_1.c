#include <stdio.h>
int main(void){
    int a,b,c;
    char s[100];
    scanf("%d",&a);
    scanf("%d %d",&b,&c);
    scanf("%s",s);/* char型;文字列%s 一文字 %c */
    printf("%d %s",a+b+c,s);
    return(0);
}
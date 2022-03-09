#include <stdio.h>
int main(void){
    int count=0,i,s1,s2,s3;
    scanf("%d",&i);
    s1 = i/100;
    s2 = i/10-s1*10;
    s3 = i-(s1*100+s2*10);
    if(s1 ==1){
        count++;
    }
    if(s2 == 1){
        count++;
    }
    if(s3 ==1){
        count++;
    }
        printf("%d",count);
        return(0);
        }
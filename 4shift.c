#include <stdio.h>
#include <stdlib.h>
int kekka(int va){
    int counter=0,i;
    for(;;){
        if(va%2==0){
            counter++;
            va=va/2;
        }
        else{
            break;
            }
    }
    return(counter);
}
int main(void){
    int count=0,no,min;
    int *no_poin;
    
    scanf("%d",&no);
    no_poin=&no;/* ポインタ変数にnoのアドレス代入 */
    no_poin=(int*)malloc(100000000);/*mallocで10^9バイト確保*/
    for(int i=0;i<no;i++){
        scanf("%d",&(no_poin[i]));
    }
    
    for(int i2=0;i2<no;i2++){
        int n=0;
        n=no_poin[i2];
        if(n%2!=0){
            printf("0\n");
            free(no_poin);
            return(0);
        }
    
    }
    min=kekka(no_poin[0]);
    for(int i=0;i<no;i++){
        if(min>kekka(no_poin[i])){
            min=kekka(no_poin[i]);
        }
        
    }
    printf("%d\n",min);
    
    free(no_poin);
    return(0);
}
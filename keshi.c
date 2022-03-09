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
    printf("%d",kekka(471526144));

}
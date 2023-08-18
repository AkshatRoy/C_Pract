#include<stdio.h>

void main(){

    int a, b, num;
    printf("Enter Upper Limit :");
    scanf("%d", &a);
    printf("Entr Lower Limit :");
    scanf("%d", &b);

    for (;b<=a; b++){
        if(b>=a){
            printf("%d", &b);
        }
        
    }

}
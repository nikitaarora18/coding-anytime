#include <stdio.h>
int main(){
    float principal,rate,time,simpleinterest;
    printf("enter principal:");
    scanf("%f",&principal);
    printf("enter rate:");
    scanf("%f",&rate);
    printf("enter time:");
    scanf("%f",&time);
    float product=principal*rate*time;
    simpleinterest=product/100;
    printf("the simple interest is:%f",simpleinterest);
    return 0;
}

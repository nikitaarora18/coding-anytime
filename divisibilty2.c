#include <stdio.h>
int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if(number %2==0 && number %3==0 && number%4 ==0)
    {
        printf("the number is divisible by 2,3,4");
    }
    else if(number %2 ==0 && number %3 ==0)
    {
        printf("the number is divisible by 2 and 3");
    }
    else if(number %2 ==0 && number %4 ==0)
    {
        printf("the number is divisible by 2 and 4");
    }
    else if(number %3==0 && number %4==0)
    {
        printf("the number is divisible by 3 and 4");
    }
    else if(number %2==0)
    {
        printf("the number is divisible by 2");
    }
    else if(number %3==0)
    {
        printf("the number is divisble by 3");
    }
    else if(number %4==0)
    {
        printf("the number is divisble by 4");
    }
    else
    {
        printf("the number is neither divisible by 2,3,4 or all");
    }
    return 0;
}
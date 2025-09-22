#include <stdio.h>
int main(){
    int number;
    printf("enter your number:");
    scanf("%d",&number);
    if(number %12 ==0)
    {
        printf("number is divisble by 3 and 4");

    }
    else if(number %4==0)
    {
        printf("number is divisible by 4");

    }
    else if (number %3==0)
    {
        printf("number is divisible by 3");

    }
    else{
        printf("number is notb divisible by 3 0r 4 both");
    }
    return 0;
}
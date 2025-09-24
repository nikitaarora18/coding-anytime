#include <stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num>0)
{
    if(num%2==0)
    {
        printf("Number is positive and even");
    }
    else {
        printf("number is positive and odd");

    }
}
else if(num==0)
{

    {
        printf("number is zero and it is neither an odd nor an even");
    
    }
}
    else{
        printf("the number is negative");
    }

}

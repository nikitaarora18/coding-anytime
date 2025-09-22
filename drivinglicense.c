#include <stdio.h>
int main(){
    printf("enter your age:");
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("yes,you are eligible");

    }
    else{
        printf("you are not eligible");
    
    }
    return 0;
    
}
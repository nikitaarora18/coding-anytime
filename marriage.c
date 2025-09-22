#include <stdio.h>
int main(){
    int years;
    printf("enter your years:");
    scanf("%d",&years);
    if(years>=25 && years<50)
    {
        printf("yes,you can celebrate silver");
    }
    else if(years>=50 && years<75)
    {
        printf("yes,you can celebrate gold");

    }
    else if(years>=75 && years<100)
    { 
        printf("yes u can celebrate platinum");

    }
    else if(years>=100)
    {
        printf("yes you can celebrate diamond");

    }
    else
    {
        printf("wait");

    }
    return 0;
}

    

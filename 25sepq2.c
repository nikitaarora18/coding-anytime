#include <stdio.h>
int main(){
    char grade;
    printf("enter the grade");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'o':
        printf("outstanding");
        break;

        case 'a':
        printf("excellent");
        break;

        case 'b':
        printf("good");
        break;

        default:
        printf("fail");
    }
    return 0;
    }

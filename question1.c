//multiplication table using loops
#include <stdio.h>
int main(){
    int num, stop;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("enter the number upto where u want the table: ");
    scanf("%d",&stop);
    for(int i=1;i<=stop;i++)
    {
printf("%d X %d=%d\n", num, i, num * i);
    }
    return 0;
}
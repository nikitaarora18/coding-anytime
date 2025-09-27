#include <stdio.h>
int main(){
    int num;
    printf("enter the stopping value between (1 to 100 both included): ");
    scanf("%d",&num);
    for(int i=0;i<=100;i++)
    {
        printf("%d \n",i);
        if(i==num)
        {
        break;
        }
    }
    return 0;
}
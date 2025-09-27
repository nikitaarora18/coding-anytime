//series
#include <stdio.h>
int main(){ //27,125,343,729,1331
    int stoppingvalue;
    printf("enter the number till where u want the series: ");
    scanf("%d",&stoppingvalue);
    for(int i=3;i<stoppingvalue;i+=2)
    {
        printf("%d \n    ",i*i*i);
        
    }
    return 0;

}
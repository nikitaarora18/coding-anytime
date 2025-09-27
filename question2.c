#include <stdio.h>
int main(){
    int hours, minutes;
    printf("enter the time: \n");
    scanf("%d",&hours);
    scanf("%d",&minutes);
    int totaltime=(hours*60)+minutes;
    printf("the total time in minutes is %d \n",totaltime);
   
    return 0;


}
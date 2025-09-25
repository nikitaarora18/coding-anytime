#include <stdio.h>
int main(){
char grade;
printf("enter the grade");
scanf("%c",&grade);
if(grade=='O')
{
printf("outstanding");
}
else if(grade=='A')
{
    printf("excellent");
}
else if(grade=='B')
{
    printf("good");

}
else if(grade=='c')
{
    printf("needs improvement");

}
else if(grade=='d')
{
    printf("performed less than expected");

}
else {
    printf("fail");
}
return 0;





}

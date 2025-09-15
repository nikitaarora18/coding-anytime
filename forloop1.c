#include <stdio.h>
int main() {
    int num, i, j = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = num; i > 0; i = i / 10) { 
        j = j * (i % 10);
    }
    printf("Product of digits = %d\n", j);

    return 0;
}

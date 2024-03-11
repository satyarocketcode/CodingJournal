#include<stdio.h>
int main(){

    int a, b, sum;

    printf("Enter first Number :");
    scanf("%d", &a);
    
    printf("Enter second Number :");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum of the numbers  %d", sum);
    return 0;
}
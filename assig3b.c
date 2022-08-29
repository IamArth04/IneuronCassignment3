#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not-Divisible");
    }
    printf("\n");
    return 0;
}
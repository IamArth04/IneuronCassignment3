#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if((a&1)==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    printf("\n");
    return 0;
}
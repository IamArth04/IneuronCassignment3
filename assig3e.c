#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if( a<1000 && a>99 )
    {
        printf("Three-Digit Number");
    }
    else
    {
        printf("Not a Three-Digit Number");
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a>0)
    {
        if(a>0)
        {
            printf("Positive");
        }
        else
        {
            printf("Zero");
        }
    }
    else
    {
        if(a<0)
        {
            printf("Negative");
        }
        else
        {
            printf("Zero");
        }
    }
    printf("\n");
    return 0;
}
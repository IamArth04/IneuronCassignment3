#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a%3==0&&a%2==0)
    {
         if(a%3==0&&a%2==0)
         {
            printf("%d is divisible by 3 and 2",a);
         }
         else
         {
            printf("%d is not divisible",a);
         }
    }
    else
    {
        if(a%3==0||a%2==0)
        {
            printf("%d is divisible by 3 or 2,but not both",a);
        }
        else
        {
            printf("%d is not divisible",a);
        }
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
         if(a%7==0||a%3==0)
         {
            printf("%d is divisible by 7 or 3",a);
         }
         else
         {
            printf("%d is not divisible",a);
         }
    printf("\n");
    return 0;
}
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Year: ");
    scanf("%d",&x);
    if(x%100==0)
    {
        if(x%400==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not a Leap year");
        }
    }
    else
    {
        if(x%4==0){
            printf("Leap Year");
        }
        else{
            printf("Not a leap year");
        }
    }
    printf("\n");
    return 0;
}
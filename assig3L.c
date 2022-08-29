#include<stdio.h>
int main(){
    char x;
    printf("Enter Alphabate: ");
    scanf("%c",&x);
    if(x>='a')
    {
        if(x<='z')
        {
            printf("Lower-Case");
        }
        else
        {
            printf("Upper-Case");
        }
    }
    else
    {
        if((x>='A')&&(x<='Z'))
        {
            printf("Upper-Case");
        }
        else
        {
            printf("Lower-Case");
        }
    }
    printf("\n");
    return 0;
}
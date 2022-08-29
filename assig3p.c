#include<stdio.h>
int main(){
    char x;
    printf("Enter a Character: ");
    scanf("%c",&x);
    if(x>='a'&&x<='z')
    {
        if(x>='a'&&x<='z')
        {
            printf("Lower-Case");
        }
        else
        {
            printf("A Digit or Special Character");
        }
    }
    else
    {
        if(x>='A'&&x<='Z')
        {
            printf("Upper-Case");
        }
        else
        {
            printf("A Digit or Special Character");
        }
    }
    printf("\n");
    return 0;
}
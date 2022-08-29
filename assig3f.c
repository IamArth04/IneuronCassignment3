#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d",a);
    }
    if(b>a)
    {
        printf("%d",b);
    }
    else
    {
        printf("one");
    }
    printf("\n");
    return 0;
}   
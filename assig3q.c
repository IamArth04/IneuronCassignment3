#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the length of the sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("It is vaild");
    }
    else
    {
        printf("It is not vaild");
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
int main(){
    int a,b,c,d,e,W;
    printf("Enter Marks of 5 Subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    W=a,b,c,d,e;
    if(W==100)
    {
        if(W<100)
        {
            printf("You Passed");
        }
        else
        {
            printf("You Failed");
        }
    }
    else{
        if(W>33)
        {
            printf("You Passed");
        }
        else
        {
            printf("You Failed");
        }
    }
    printf("\n");
    return 0;
}

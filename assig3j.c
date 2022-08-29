#include<stdio.h>
int main(){
    int CP,SP;
    float Profit,Loss;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d",&CP,&SP);
    Profit=SP-CP;
    Loss=CP-SP;
    if(SP>CP)
    {
        if(SP-CP)
        {
            printf("Profit percentage is %f",(Profit/CP)*100);
        }
        else
        {
            printf("%d",Loss);
        }
    }
    else
    {
        if(CP-SP)
        {
            printf("Loss percentage is %f",(Loss/CP)*100);
        }
        else
        {
            printf("%d",Profit);
        }
    }
    printf("\n");
    return 0;
}
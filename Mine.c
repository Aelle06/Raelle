#include <stdio.h>

int main() 
{
    int withdrawl;
    int amount = 50000;
    scanf("%d", &withdrawl);
    amount = amount - withdrawl;
    printf("The amount is %d", amount);
    return 0;
}

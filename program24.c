#include<stdio.h>
void swapGuests(int *roomKey1,int *roomKey2)
{
    int temp = 0;
    temp = *roomKey1;
    *roomKey1 = *roomKey2;
    *roomKey2 = temp;
}
int main()
{
    int guest1 = 0, guest2=0;
    printf("\nEnter room number for guest 1:");
    scanf("%d",&guest1);
    printf("\nEnter room number for guest 2:");
    scanf("%d",&guest2);
    printf("\nBefore swapping of 2 guests:%d,%d",guest1,guest2);
    swapGuests(&guest1,&guest2);
    printf("\nAfter swapping of 2 guests:%d,%d",guest1,guest2);
    return 0;
}


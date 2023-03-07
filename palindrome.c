#include <stdio.h>
int main()
{
    int num,revNum=0,rem=0,tempNum;
    printf("Enter an integer number ");
    scanf("%d", &num);
    tempNum=num;
    while(tempNum!=0)
    {
        rem = tempNum%10;
        revNum=revNum*10+rem;
        tempNum/=10;
    }
    if(revNum==num)
    {
        printf("%d is a palindrome", num);
    }
    else
        printf("%d is not a palindrome", num);

    return 0;
}

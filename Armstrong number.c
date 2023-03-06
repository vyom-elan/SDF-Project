#include<stdio.h>
#include<math.h>

int main()
{
    int n,s,i,t,a;
    printf("\nThe Armstrong numbers in between 1 to 500 are : \n");

    for(i = 1; i <= 500; i++)
    {
        t = i;
        s = 0;
        while(t != 0)
        {
            a = t%10;
            s += a*a*a;
            t = t/10;
        }

        if(s == i)
        printf("\n\t%d", i);
    }
    return 0;
}

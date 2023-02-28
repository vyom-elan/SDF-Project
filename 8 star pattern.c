#include <stdio.h>
int main()
{
    int i, j, s;
    printf("size: ");
    scanf("%d", &s);

    for(i=1; i<s*2; i++)
    {
        for(j=1; j<=s; j++)
        {
            if((i==1 && (j==1 || j==s)) ||
               (i==s && (j==1 || j==s)) ||
               (i==s*2-1 && (j==1 || j==s)))
            {
                printf(" ");
            }
            else if(i==1 || i==s || i==(s*2)-1 || j==1 || j==s)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

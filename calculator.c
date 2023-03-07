#include <stdio.h>
int main()
{
    int n;
    printf("Enter the total number of elements you want to perform operation with");
    scanf("%d", n);
    
    float n1, n2, res=0.0f;
    char op;
    printf("Calculator\n");
    printf("Enter [no.1] [+ - * /] [no.2]\n");
    scanf("%f %c %f", &n1, &op, &n2);
    switch(op)
    {
        case '+':
            res = n1 + n2;
            break;

        case '-':
            res = n1 - n2;
            break;

        case '*':
            res = n1 * n2;
            break;

        case '/':
            res = n1 / n2;
            break;

        default:
            printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f", n1, op, n2, res);

    return 0;
}

#include "stdio.h"

int power(int num, int exp)
{
    int Total = num;
    for (int i = 1; i < exp; i++)
    {
        Total = Total * num;
        // printf("%d\n", Total);
    }
    printf("%d\n", Total);
    return Total;
}
int callPower()
{
    printf("num :\n >");
    int num;
    scanf("%d", &num);
    printf("pow :\n >");
    int pow;
    scanf("%d", &pow);
    power(num, pow);
}

int div(int num1, int num2)
{
    double num1D = (double)num1;
    double num2D = (double)num2;
    double Total;
    if (num2D != 0)
    {
        Total = num1D / num2D;
        printf("%.2lf\n", Total);
        return Total;
    }
    else
    {
        Total = 0;
        printf("Zero divison error\n");
    }
}
int callDiv()
{
    printf("num1 :\n >");
    int num1;
    scanf("%d", &num1);
    printf("num2 :\n >");
    int num2;
    scanf("%d", &num2);
    div(num1, num2);
}

int isEvenFunc(int num)
{
    int isEven = (num % 2 == 0) ? 1 : 0;
    return isEven;
}
int callIsEvenFunc()
{
    printf("num :\n >");
    int num;
    scanf("%d", &num);
    int isEven = isEvenFunc(num);
    (isEven == 1) ? printf("%d is Even\n", num) : printf("%d is Odd\n", num);
}

int fact(int num)
{
    int f = 1;
    for (int i = 1; i <= num; i++)
    {
        f = i * f;
        printf("%d\n", f);
    }
    // printf("%d\n",f);
    return f;
}
int callFact()
{
    printf("num :\n >");
    int num;
    scanf("%d", &num);
    fact(num);
}

int main()
{
    // CALL FUNCTIONS HERE
    callPower();
    callDiv();
    callIsEvenFunc();
}

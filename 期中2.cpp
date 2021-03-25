#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double mypow(double x, int n);
int main()
{
    int n;
    double x, result;

    scanf("%lf%d", &x, &n);
    result = mypow(x, n);
    printf("result=%f\n", result);

    return 0;
}
double mypow(double x, int n)
{
    int i;
    double result;
    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }

    return result;
}

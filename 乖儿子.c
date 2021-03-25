#include<stdio.h>

void main()
{
    const int il=40;
    int *pi;
    pi=(int *)&il;
    *pi=80;
    printf("%d",il);
}

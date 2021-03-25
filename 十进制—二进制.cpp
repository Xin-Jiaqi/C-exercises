//十进制变为二进制 

#include<stdio.h>
int main(void)
{
    int i=0,n,a[32] = {0};
    printf("请输入一个十进制整数.\n");
    scanf("%d",&n);
    while (n>0)
    {
        a[i]=n%2;
        i=i+1;
        n=n/2;
    }
    printf("十进制整数转换为二进制数是:\n");
    for(i--;i>=0;i--)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}

//ʮ���Ʊ�Ϊ������ 

#include<stdio.h>
int main(void)
{
    int i=0,n,a[32] = {0};
    printf("������һ��ʮ��������.\n");
    scanf("%d",&n);
    while (n>0)
    {
        a[i]=n%2;
        i=i+1;
        n=n/2;
    }
    printf("ʮ��������ת��Ϊ����������:\n");
    for(i--;i>=0;i--)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}

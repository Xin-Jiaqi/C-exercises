#include <stdio.h>
#define N 5
int main()
{int a[N],i ,j ,med,p,temp;
printf("������10����:\n");
for( i = 0 ; i < N ; i++)
scanf("%d",&a[i]); printf("\n");
printf("ԭʼ����Ϊ:\n");
for( i = 0 ; i < N ; i++)
printf("%d ",a[i]);


for(i=0;i<N-1;i++)
{  p=i;
    for(j=i+1;j<N;j++)
      if(a[j]<a[p])  p=j;
   if(p!=i)
 {
    med=a[p];
    a[p]=a[i];
    a[i]=med;
    }
 }
printf("\n����������Ϊ:\n");
for(i=0; i<N; i++)
printf("%d ",a[i]); 
printf("\n"); return 0; }


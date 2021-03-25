#include<stdio.h>
int main()
{
 int a[10][10];
 int i, j, n;
 scanf("%d", &n);
 a[0][0] = '*';
 for (i = 1; i <= n; i++)
 {
  for (j = 1; j <= i; j++)
  {
   a[i][0] = a[0][i] = i;
   a[i][j] = i*j;
  }
 } 
 for (i = 0; i <= n; i++)
 {
  if (!i) 
  {
   printf("%c ", a[0][0]);//输出星号，输出两位，不够补空格
   for (j = 1; j <= n; j++)
    printf("%d ", a[i][j]);
  }
  else
  {
   for (j = 0; j <= i; j++)
    printf("%d ", a[i][j]);
  }
   
  printf("\n");
 }
 return 0;
}

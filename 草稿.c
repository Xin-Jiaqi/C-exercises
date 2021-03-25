#include<stdio.h>
#include<math.h>
void main()
{
    float dx,dt,t,L=0.2,a[100000],b[100000],alpha=1.42857*10e-3;  
    /*dx表示delta(x)，dt表示delta(t)，alpha为热扩散率。由于数组大小随输入值而变化，所以取得比较大*/
    int i,n1,n2,n=0,total=0;                                
    printf("input data dx:\n");          /*输入壁面间网格节点的间距dx*/
    scanf("%f",&dx);
    printf("input data dt:\n");          /*输入时间推进的步长dt*/
    scanf("%f",&dt);
    printf("input data t:\n");           /*输入计算的总时间，代表题目中的t1、t2等*/
    scanf("%f",&t);
    n1=(int)(L/dx);
    n2=(int)(t/dt);
    printf("n1=%d  n2=%d\n",n1,n2);
    for(i=0;i<=n1;i++)
      {
     if(i<n1)a[i]=10;
    else a[i]=20;
      }
    while(n<n2)                       /*一直迭代到满足的次数为止*/
    for(i=0;i<=n1;i++)
{
if(i==0){b[i]=10;a[i]=b[i];}     /*表示左壁面的温度始终保持在10摄氏度*/
        else
if(i==n1){b[i]=20;a[i]=b[i];}     /*表示右壁面的温度始终保持在20摄氏度*/
        else
{
b[i]=a[i]+alpha*dt*(a[i+1]-2*a[i]+a[i-1])/(dx*dx);   /*差分方程的表达式*/
a[i]=b[i];
}
     n++;
}
for(i=0;i<=n1;i++)
{
    printf("%8.4f",b[i]);
    total++;
if(total%10==0)printf("\n");
}
}

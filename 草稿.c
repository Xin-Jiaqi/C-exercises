#include<stdio.h>
#include<math.h>
void main()
{
    float dx,dt,t,L=0.2,a[100000],b[100000],alpha=1.42857*10e-3;  
    /*dx��ʾdelta(x)��dt��ʾdelta(t)��alphaΪ����ɢ�ʡ����������С������ֵ���仯������ȡ�ñȽϴ�*/
    int i,n1,n2,n=0,total=0;                                
    printf("input data dx:\n");          /*������������ڵ�ļ��dx*/
    scanf("%f",&dx);
    printf("input data dt:\n");          /*����ʱ���ƽ��Ĳ���dt*/
    scanf("%f",&dt);
    printf("input data t:\n");           /*����������ʱ�䣬������Ŀ�е�t1��t2��*/
    scanf("%f",&t);
    n1=(int)(L/dx);
    n2=(int)(t/dt);
    printf("n1=%d  n2=%d\n",n1,n2);
    for(i=0;i<=n1;i++)
      {
     if(i<n1)a[i]=10;
    else a[i]=20;
      }
    while(n<n2)                       /*һֱ����������Ĵ���Ϊֹ*/
    for(i=0;i<=n1;i++)
{
if(i==0){b[i]=10;a[i]=b[i];}     /*��ʾ�������¶�ʼ�ձ�����10���϶�*/
        else
if(i==n1){b[i]=20;a[i]=b[i];}     /*��ʾ�ұ�����¶�ʼ�ձ�����20���϶�*/
        else
{
b[i]=a[i]+alpha*dt*(a[i+1]-2*a[i]+a[i-1])/(dx*dx);   /*��ַ��̵ı��ʽ*/
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

//����һ����ʽ�硰��������������������ı��ʽ����3.1*4��
//�����������гˡ����ࡢxy���㡣���������Ƕ��������������������ֽ������㣬
//������Ϊ��������������������������ʱ��������λС����

#include <stdio.h>

#include <math.h>

int main()

{

  char sign;

  double x,y;

  scanf("%lf%c%lf", &x, &sign, &y);

  switch (sign)

  {

case '*': printf("%.2f * %.2f = %.2f\n", x, y, x * y);break;

case '%': printf("%.2f Mod %.2f = %d\n", x, y, (int)x % (int)y);break;

case '^': printf("%.2f ^ %.2f = %.2f\n", x, y, pow(x, y));break;

default: printf("Input Error!\n");break;

  }

  return 0;

}

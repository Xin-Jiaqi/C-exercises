//输入一个形式如“操作数运算符操作数”的表达式，如3.1*4，
//对两个数进行乘、求余、xy运算。求余运算是对两个操作数的整数部分进行运算，
//结果输出为整数，其余操作数和运算结果输出时都保留两位小数。

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

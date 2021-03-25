#include <stdio.h>
int main() {
 int data1, data2;
 char op;
 scanf("%d %d %c", &data1, &data2, &op);
 switch (op) {
 case '+':
  printf("%d", data1 + data2);
  break;
 case '-':
  printf("%d", data1 - data2);
  break;
 case '*':
  printf("%d", data1 * data2);
  break;
 case '/':
  if (data1 % data2 != 0) {
   printf("%.2f", (float)data1 / (float)data2);
  }
  else {
   printf("%d", data1 / data2);
  }
  break;
 }
}

#include <stdio.h>
void solve(int x) {
 for (int a = 1; a <= 9; a++) {
  for (int b = a + 1; b <= 9; b++) {
   if ((10 * a + b) * (10 * b + a) == x) {
    printf("%d%d",a,b);
    return;
   }
   else {
    // do nothing
   }
  }
 }
 printf("No Answer");
}
int main() {
 int x;
 scanf("%d", &x);
 solve(x);
}

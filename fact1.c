#include<stdio.h>
int main(void) {
  int n, val, fac = 1;
  printf("/n Enter an Integer ");
  scanf("%d", &n);

  for (val = 1; val <= n; val++) {
    fac *= val;
  }

  printf("%d factorial", fac);
}
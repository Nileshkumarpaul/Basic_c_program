#include<stdio.h>
int main(void) {
  int n, d1, d2, d3, rev = 0, nCopy;
  printf("/n Enter 3 digit integer ");
  scanf("%d", &n);
  nCopy = n;

  d1 = n % 10;
  rev += d1 * d1 * d1;
  n = n / 10;

  d2 = n % 10;
  rev += d2 * d2 * d2;
  n = n / 10;

  d3 = n % 10;
  rev += d3 * d3 * d3;

  if (rev == nCopy)
    printf("Arm");
  else
    printf("Not Arm");
}
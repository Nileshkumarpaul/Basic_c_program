#include<stdio.h>
int main(void) {
  int d1,d2,d3,rev=0,n,nCopy;
  printf("/n Enter 3 digit integer ");
  scanf("%d",&n);

  nCopy = n;

  d1 = n%10;
  rev += d1*100;
  n = n/10;
  
  d2 = n%10;
  rev += d2*10;
  n = n/10;

  d3 = n%10;
  rev += d3;
  n = n/10;

  printf("%d is reverse of %d",rev,nCopy);
}
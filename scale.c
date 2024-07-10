# include<stdio.h>
int main(void) {
  float c, f;
  printf("/n Enter integer ");
  scanf("%f", &f);

  // c/5 = (f-32) / 9
  c = (f - 32) * 5 / 9;

  printf("%f", c);
}
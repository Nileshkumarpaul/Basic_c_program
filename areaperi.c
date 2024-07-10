#include<stdio.h>
int main(){
	int l,b,area,peri;
	printf("Enter the value of length:");
	scanf("%d",&l);
	printf("Enter the value of breadth:");
	scanf("%d",&b);
	area=l*b;
	peri=2*(l+b);
	printf("the area of a rectangle %d",area);
	printf("the perimeter of a rectangle %d",peri);
	return 0;
}
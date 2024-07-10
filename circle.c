#include<stdio.h>
int main(){
	int r;
	float pi=3.14,area;
	printf("Enter the value of radius of a circle:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("The area of a circle %f:",area);
	return 0;
	}
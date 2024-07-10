#include<stdio.h>
int main(){
	float si,ci,p,r;
	int t;
	printf("enter the value of principal:");
	scanf("%f",&p);
	printf("enter the time:");
	scanf("%d",&t);
	printf("enter the rate of interest:");
	scanf("%f",&r);
	si=(p*r*t)/100;
	printf("after the simple interest the amount %f",si);
	return 0;
}
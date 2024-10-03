#include<stdio.h>
#include<math.h>

int main() {
	int p,t,n;
	float r,ci;
	
	printf("Enter the principle amount\n");
	scanf("%d",&p);
	
	printf("Enter time period\n");
	scanf("%d",&t);
	
	printf("Enter number of compounded times\n");
	scanf("%d",&n);
	
	printf("Enter rate\n");
	scanf("%f",&r);
	
	ci=p*pow((1+r/(n*100)),n*t);
	
	printf("compound interest:%d,%f",ci);
	
	return 0;
}
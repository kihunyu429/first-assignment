//programming to calculate simple interest
/*NAME KIHUNYU EMMANUEL KABORO CT101\G\21922\24*/
#include<stdio.h>


int main () {
	int p,t;
	float r,si;
	
	printf("Enter the principle amount\n");
	scanf("%d",&p);
	
	printf("Enter the time period");
	scanf("%d",&t);
	
	printf("Enter rate");
	scanf("%f",&r);
	
	si=(p * t * r) / 100;
	 
	 printf("simple interest:%d,%f",si);
	 
	 return 0;
	
	
}
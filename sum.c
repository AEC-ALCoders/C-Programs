#include<stdio.h>
int main()
{
	
	float a,b,c,total,avg;
	printf("\nEnter three numbers : ");
	scanf("%f %f %f",&a,&b,&c);
	total = a + b + c;
	avg = total / 3;
	printf("\nSum is %.2f\n",total);
	printf("Average is %.2f\n\n",avg);
	return 0;
}
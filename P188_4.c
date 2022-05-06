#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main(void)
{
	int n;
	double step1, step2, final;
	printf("Please enter a nonnegative integers less than 8>");
	scanf("%i", &n);
	step1 = 2*n+1.0/3.0;
	//printf("Step1:%f\n", step1);
	step2 = sqrt(step1*PI);
	//printf("Step2:%f\n", step2);
	final = pow(n, n)*exp(-n)*step2;
	printf("%i! equals approximately %f", n, final);
}

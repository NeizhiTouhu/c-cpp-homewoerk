#include <stdio.h>
#include <math.h>

int main(void)
{
	int corners;
	double sum=0;
	printf("Please enter the number of corners. >");
	scanf(" %d",&corners);
	double x_y[2][corners+1];
	for (int i = 1;i <= corners;i++)
	{
		printf("Please enter point %d.(x and y divide by space)>",i);
		scanf("%lf &lf",&x_y[0][i], &x_y[1][i]);
	}
	x_y[0][0] = x_y[0][corners];
	x_y[1][0] = x_y[1][corners];
	for(int i=0;i<=corners-1;i++)
	{
		sum=(x_y[0][i+1]+x_y[0][i])+(x_y[1][i+1]-x_y[1][i]);
	}
	sum = 0.5*abs(sum);
	printf("The area of polygon is %lf.",sum);
	return 0;
}

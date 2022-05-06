#include <stdio.h>
#define pi 3.141593
int main(void)
{
	double radius, slant_height, area;
	printf("Please enter the radius and slant height.(Spaced by spaces)>");
	scanf("%lf%lf",&radius,&slant_height);
	area = pi*radius*radius+pi*radius*slant_height;
	printf("The total surface area is %f.",area);
	return 0;
} 

#include <stdio.h>
#define pi 3.14159265

int parallelogram(void);
int triangle(void);
int trapezoid(void);
int circle(void);

int main(void)
{
	int mode;
	double input1, input2, input3, output;
	printf("Enter the number of the problem you wish to solve.\n(1) Area of a parallelogram (4) Area of a circle\n(2) Area of a triangle	    (5) QUIT\n(3) Area of a trapezoid\n>");
	scanf("%d", &mode);
	while(mode != 5)
	{
		if(mode == 1)
		{
			printf("Please enter the length of bottom side. >");
			scanf("%lf", &input1);
			printf("Please enter the height. >");
			scanf("%lf", &input2);
			output = input1*input2;
		}
		else if(mode == 2)
		{
			printf("Please enter the length of bottom side. >");
			scanf("%lf", &input1);
			printf("Please enter the height. >");
			scanf("%lf", &input2);
			output = input1*input2*0.5;
		}
		else if(mode == 3)
		{
			printf("Please enter the length of bottom side. >");
			scanf("%lf", &input1);
			printf("Please enter the length of top side. >");
			scanf("%lf", &input2);
			printf("Please enter the height. >");
			scanf("%lf", &input3);
			output = (input1+input2)*input3*0.5;
		}
		else if(mode == 4)
		{
			printf("Please enter the Radius. >");
			scanf("%lf", &input1);
			output = pi*input1*input1;
		}	
		else
			printf("Please enter a right number.");
		printf("The area of it is %f.\n", output);
		printf("\nEnter the number of the problem you wish to solve.\n(1) Area of a parallelogram (4) Area of a circle\n(2) Area of a triangle (5) QUIT\n(3) Area of a trapezoid\n");
		scanf("%d", &mode);
	}
	return 0;
}

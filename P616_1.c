#include <stdio.h>

void formula_1(double a, double b, double c, double d,double *out_1p, double *out_2p);
void formula_2(double a, double b, double c, double d,double *out_1p, double *out_2p);

int main(void)
{
	double a, b, c, d, out_1, out_2;
	
	printf("Please enter a,b,c,d in (a + bi) x (c + di) -divide by space\n");
	scanf(" %lf %lf %lf %lf", &a,&b,&c,&d);
	formula_1(a,b,c,d,&out_1,&out_2);
	printf("The result is %lf + %lfi\n\n",out_1,out_2);
	
	printf("                         (a + bi) \n");
	printf("Please enter a,b,c,d in  --------    -divide by space\n");
	printf("                         (c + di) \n");
	scanf(" %lf %lf %lf %lf", &a,&b,&c,&d);
	formula_2(a,b,c,d,&out_1,&out_2);
	printf("The result is %lf + %lfi",out_1,out_2);
}

void formula_1(double a, double b, double c, double d,double *out_1p, double *out_2p)
{
	*out_1p = a*c + b*d;
	*out_2p = a*d + b*c;
}

void formula_2(double a, double b, double c, double d,double *out_1p, double *out_2p)
{
	*out_1p = (a*c + b*d)/(c*c +d *d);
	*out_2p = (b*c - a*d)/(c*c +d *d);
}

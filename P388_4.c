#include <stdio.h>

void get_problem(double *modep);
void get2_pt(double *x_1p,double *y_1p,double *x_2p,double *y_2p);
void get_pt_slope(double *slopep,double *xp,double *yp);
void slope_intcpt_from2_pt(double *x_1p,double *y_1p,double *x_2p,double *y_2p,double *slopep,double *bp);
void intcpt_from_pt_slope(double *slopep,double *xp,double *yp,double *bp);
void display2_pt(double *x_1p,double *y_1p,double *x_2p,double *y_2p);
void display_pt_slope(double *slopep,double *xp,double *yp);
void display_slope_intcpt(double *slopep,double *bp);

int main(void)
{
	double mode,slope, x_1, x_2, y_1, y_2, b, stop=-1;
	char letter;
	while(stop != 1){
		stop = -1;
		get_problem(&mode);
		if(mode == 1)
		{
			get2_pt(&x_1,&y_1,&x_2,&y_2);
			display2_pt(&x_1,&y_1,&x_2,&y_2);
			slope_intcpt_from2_pt(&x_1,&y_1,&x_2,&y_2,&slope,&b);
			display_slope_intcpt(&slope,&b);
		}
		else if(mode == 2)
		{
			get_pt_slope(&slope,&x_1,&y_1);
			display_pt_slope(&slope,&x_1,&y_1);
			intcpt_from_pt_slope(&slope,&x_1,&y_1,&b);
			display_slope_intcpt(&slope,&b);
		}
		else
			printf("Please enter the right number.\n");
		while(stop==-1){
			printf("Do another conversion (Y or N)=> ");
			scanf(" %c", &letter);
			if(letter=='Y'){
				stop = 0;
				printf("\n\n");
			}
			else if(letter=='N')
				stop = 1;
			else
				printf("Please enter the right letter.\n");
		}
	}
	return 0;
}


void get_problem(double *modep)
{
	printf("Select the form that you would like to convert to slope-intercept form:\n1) Two-point form (you know two points on the line)\n2) Point-slope form (you know the line's slope and one point)\n=> ");
	scanf("%lf",&*modep);
}

void get2_pt(double *x_1p,double *y_1p,double *x_2p,double *y_2p)
{
	printf("\nEnter the x-y coordinates of the point separated by a space=> ");
	scanf("%lf %lf",&*x_1p, &*y_1p);
	printf("Enter the x-y coordinates of the point separated by a space=> ");
	scanf("%lf %lf",&*x_2p, &*y_2p);
}

void get_pt_slope(double *slopep,double *xp,double *yp)
{
	printf("\nEnter the slope=> ");
	scanf("%lf",&*slopep);
	printf("Enter the x-y coordinates of the point separated by a space=> ");
	scanf("%lf %lf",&*xp, &*yp);
}

void slope_intcpt_from2_pt(double *x_1p,double *y_1p,double *x_2p,double *y_2p,double *slopep,double *bp)
{
	*slopep = (*y_2p-*y_1p)/(*x_2p-*x_1p);
	*bp = *y_1p - *slopep**x_1p;
}

void intcpt_from_pt_slope(double *slopep,double *xp,double *yp,double *bp)
{
	*bp = *yp-*slopep**xp;
}

void display2_pt(double *x_1p,double *y_1p,double *x_2p,double *y_2p)
{
	printf("\nTwo-point form\n");
	printf("   (%.2f - %.2f)\n", *y_2p, *y_1p);
	printf("m = -------------\n");
	printf("   (%.2f - %.2f)\n", *x_2p, *x_1p);
}

void display_pt_slope(double *slopep,double *xp,double *yp)
{
	printf("\nPoint-slope form\n");
	printf(" y - %.2f = %.2f(x - %.2f)\n",*yp,*slopep,*xp);
}

void display_slope_intcpt(double *slopep,double *bp)
{
	printf("\nSlope-intercept form\n");
	printf("y = %.2fx + %.2f\n\n", *slopep, *bp);
}

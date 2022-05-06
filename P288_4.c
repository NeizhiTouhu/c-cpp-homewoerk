#include <stdio.h>
#define sentinel 0
int main(void){
	double number=1;
	int integer,c_i=0,c_f=0;
	while(number!=sentinel)
	{
		printf("Please enter a number (exit with 0).>");
		scanf("%lf",&number);
		if(number == (int)number)
			c_i ++;
		else
			c_f ++;
	}
	printf("Their are %d whole numbers and %d values with fractional parts.",c_i-1,c_f);
}

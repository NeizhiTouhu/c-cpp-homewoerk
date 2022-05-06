#include <stdio.h>
#include <math.h>

int main(void)
{
	int num_total, num, count=0, count_even=0, count_odd=0, count_even_sum=0, count_odd_sum=0, count_even_sum_sq=0, count_odd_sum_sq=0;
	printf("Please enter the number of values(N). >");
	scanf("%d", &num_total);
	printf("\n");
	while(count < num_total)
	{
		printf("Please enter a values. >");
		scanf("%d", &num);
		if((num%2) == 0) 
		{
			count_even ++;
			count_even_sum += num;
		}
		else
		{
			count_odd ++;
			count_odd_sum += num;
		}
		count ++;
	}
	printf("\nThere are %d even values and %d odd values.\n\n", count_even, count_odd);
	printf("The sum of even values is %d.\nThe sum of odd values is %d\n",count_even_sum, count_odd_sum);
	count_even_sum_sq = pow(count_even_sum,2);
	count_odd_sum_sq = pow(count_odd_sum,2);
	printf("The square of sum of even values is %d.\nThe square of sum of odd values is %d\n",count_even_sum_sq, count_odd_sum_sq);
	return 0;
}

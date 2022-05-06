#include <stdio.h>
#include <math.h>

int main(void)
{
	double rateinput,principal, rate, payment;
	int term;
	double interest_n, principal_n, principal_balance_n;
	int payment_n;
	printf("Please enter enter the amount borrowed($). >");
	scanf("%lf", &principal);
	printf("Please enter the annual interest rate(%). >");
	scanf("%lf", &rateinput);
	printf("Please enter the number of payments(months). >");
	scanf("%d", &term);
	rate = rateinput/1200;
	payment = rate*principal/(1-pow((1+rate),-term));
	
	printf("\n\n");
	printf("Principal	&%.2f	Payment	&%.2f\n",principal,payment);
	printf("Annual interest	%.1f%%		Term	%d months\n\n",rateinput,term);
	printf("Payment  Interest	Principal	Principal Balance\n");
	printf("---------------------------------------------------------\n");
	
	principal_balance_n = principal;
	payment_n = 0;
	while((int)principal_balance_n > 0)
	{
		payment_n ++;
		interest_n = principal_balance_n*rate;
		principal_n = payment - interest_n;
		principal_balance_n = principal_balance_n - principal_n;
		printf("  %d	  %.2f  	%.2f    	%.2f\n", payment_n, interest_n, principal_n, principal_balance_n);
	}
	
	printf("Final payment	$%.2f\n", payment);
	printf("---------------------------------------------------------\n");
	return 0;
}

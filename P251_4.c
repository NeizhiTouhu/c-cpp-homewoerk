#include <stdio.h>
int main(void)
{
	char input;
	printf("Please enter the first letter of the colour(such as ¡°Y¡± or ¡°y¡±) >");
	scanf("%c", &input);
	if(input=='O'||input=='o')
		printf("The the contents of a compressed-gas cylinder is ammonia.\n");
	else if(input=='B'||input=='b')
		printf("The the contents of a compressed-gas cylinder is carbon monoxide.\n");
	else if(input=='Y'||input=='y')
		printf("The the contents of a compressed-gas cylinder is hydrogen.\n");
	else if(input=='G'||input=='g')
		printf("The the contents of a compressed-gas cylinder is oxygen.\n");
	else
		printf("Contents unknown.\n");
}

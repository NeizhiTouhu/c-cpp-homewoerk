#include <stdio.h>
#include <string.h>

int main(void){
	char strs[5][32767];
	char temp[32767];
	int ii;
	for(int i=0;i<=4;i++)
	{
		printf("Please enter the %d name.(enter Ctrl+Z to skip)>", i+1);
		scanf ("%s", &strs[i]);
	}
	for(int i=0;i<4;i++)
	{
		ii = i+1;
		while(ii <= 4)
		{
			if(strcmp(strs[i], strs[ii]) > 0)
			{
				strcpy(temp, strs[ii]);
				strcpy(strs[ii], strs[i]);
				strcpy(strs[i], temp);
			}
			ii++;
		}
	}
	printf("The array strs after alphabetizing is:");
	for(int i=0;i<=4;i++)
		printf("%s ", strs[i]);
	return 0;
}

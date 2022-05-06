#include <stdio.h>
int fun1(void);
int fun2(void);
int main(void)
{	
	printf("Testing &&:\n");
	if (fun1() && fun2())
		printf("Test of && complete.\n");
	else
		printf("Fail.\n");
	printf("Testing ||:\n");
	if (fun1() || fun2())
		printf("Test of || complete.");
	else
		printf("Fail.");
	return 0;
}

int fun1(void)
{
	char input;
	char temp;
	printf("Please enter “T” for true or “F” for false.>");
	//scanf("%c%c", &input, &temp);
	scanf(" %c", &input);//%c前面加空格，只读一个字符
	if(input=='T')
		return 1;
	else if(input=='F')
		return 0;
	else
	{
		printf("Please enter the correct characters\n");
		return -1;
	}
}

int fun2(void)
{
	printf("fun2 executed\n");
	return 1;
}

#include<stdio.h>
#define YUAN_PER_POUNDS 8.408 /*conversion constant*/
int main()
{
     double pounds,yuan;
     printf("Please input a price in pounds.>");
     scanf("%lf",&pounds);
     yuan = YUAN_PER_POUNDS * pounds;
     printf("That equals %lf yuan.\n",yuan);
     return 0;
}

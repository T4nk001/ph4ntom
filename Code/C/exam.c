#include <stdio.h>
int main (void)
{
	float weight;
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: \n");

	scanf("%f",&weight);

	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is woreth $%5f.\n",value);
	printf("You are easily worth that!If rhodlum prices drop.\n");
	printf("eat more to maintain your value.\n");
	return 0;
}

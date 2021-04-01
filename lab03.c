#include <stdio.h>
int main()
{
	int num1, num2, num3, max;
	printf("Please enter first number:\n");
	scanf("%d",&num1);
	printf("Please enter second number:\n");
	scanf("%d",&num2);
	printf("Please enter third number:\n");
	scanf("%d",&num3);
	max = num1;
	// comparing max with number 1.
	if (max < num2)
	{
		max = num2;
	}
	// comparing max with number 2.
	if (max < num3)
	{
		max = num3;
	}
	printf("Maximum number is %d\n", max);
	return 0;
} 

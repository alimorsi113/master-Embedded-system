/*
 * factorial  user- define function.c

 *
 *  Created on: May 1, 2023
 *      Author: Mg Magic
 */
/*source code to find factorial by user _definedfunction*/
#include <stdio.h>
int factorial(int num);
int main()
{
	int num;
	printf("Enter a positive integer: ");
	fflush (stdout);
	scanf("%d", &num);

	if (num < 0)
	{
		printf("Error: Factorial of negative number is undefined.");
		return 0;
	}

	printf("Factorial of %d = %d", num, factorial(num));
	return 0;
}

int factorial(int num)
{
	int i, fact = 1;
	for (i = 1; i <= num; ++i)
	{
		fact *= i;
	}
	return fact;
}



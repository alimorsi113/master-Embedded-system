/*
 * ex10.c

 *
 *  Created on: Mar 18, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
#include <string.h>
int main ()
{
	float c, a, b;
	printf ("Enter three number :\n");
	fflush (stdout );
	scanf ("%f" "%f""%f" ,&c ,&a ,&b);
	if (c>a)
	{
		if (c>b)
			printf ("the largest value is = %.1f",c);
		else
			printf ("the largest value is = %.1f",b);
	}
	else
	{
		if (a>b)
			printf ("the largest value is = %.1f",a);
		else
			printf ("the largest value is  = %.1f",b);
	}
	return 0;
}



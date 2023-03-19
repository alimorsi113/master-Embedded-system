/*
 * ex11.c

 *
 *  Created on: Mar 18, 2023
 *      Author: ali morsi
 */ #include <stdio.h>
#include <string.h>
int main ()
{
	float c;
	printf ("Enter the number :\n");
	fflush (stdout );
	scanf ("%f" ,&c);
	if (c>=0)
	{
		if (c==0)
			printf ("you entered 0 = %.1f",c);
		else
			printf ("you entered positive = %.1f",c);
	}
	else
	{

			printf ("you entered negative = %.1f",c);

	}
	return 0;
}




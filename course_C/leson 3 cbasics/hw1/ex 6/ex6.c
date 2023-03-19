/*
 * ex6.c

 *
 *  Created on: Mar 18, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
#include <string.h>
int main ()
{
	float a, b, z;
	printf ("enter value of a :\n");
	fflush (stdout);
	scanf ("%f" ,&a);
    printf ("enter value of b :\n");
	fflush (stdout);
	scanf ("%f" ,&b);
    z=a;
	a=b;
	b=z;
	printf ("After swapping, value of a = %0.1f\n",a);
	printf ("After swapping, value of b = %0.1f\n",b);
	return 0;
}




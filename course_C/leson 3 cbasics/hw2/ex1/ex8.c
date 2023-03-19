/*
 * ex8.c

 *
 *  Created on: Mar 18, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
#include <string.h>
int main ()
{
	int a;
	printf ("Enter an integer you want to check :");
	fflush (stdout);
	scanf ("%d" ,&a);
	if
		((a % 2) == 0)
		printf ("%d is even .", a);
	else
	printf ("%d is odd .", a);

	return 0;
}



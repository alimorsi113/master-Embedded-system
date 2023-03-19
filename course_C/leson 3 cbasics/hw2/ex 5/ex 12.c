/*
 * ex 12.c

 *
 *  Created on: Mar 19, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
#include <string.h>
int main ()
{
	char c;
	printf ("Enter a charcter : ");
	fflush (stdout );
	scanf ("%c", &c);
	if ((c >='a' && c <='z') || (c >='A' && c <='Z'))
		printf ("%c is a alphabet",c);
	else
		printf ("is not alphabet",c);
	return 0;
}



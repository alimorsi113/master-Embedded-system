/*
 * ex7.c

 *
 *  Created on: Mar 19, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
int main ()
{
	int n, count;
	int factorial=1;
	printf ("enter integer value :");
	 fflush (stdin); fflush (stdout);
	scanf ("%d",&n);
	if (n<0)
		printf ("Erorr!! factoriall of negative dosent exist");
	else {
		for (count=1 ; count <=n ; ++count)
		{
			factorial*=count;
		}
		printf ("factorial =%d",factorial);
	}
	return 0;
}





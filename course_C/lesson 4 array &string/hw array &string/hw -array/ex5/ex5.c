/*
 * ex5.c
 *
 *  Created on: Mar 28, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
int main()
{
	int a[30] , ele ,num ,i;

	printf (" Enter number of element :");
	  fflush (stdin);  fflush (stdout);
	scanf ("%d",&num);

	/* printf ("  Enter the values :\n"); */
		for (i = 0; i < num ; i++) {
		scanf ("%d", &a[i]);
	}
	printf ("\n  Enter the element  to be searched:");
	fflush (stdout);
	scanf ("%d",&ele);
	i=0;
	while (i<num && ele != a[i]) {
		i++;
	}
	if (i<num){
		printf (" number found at location =%d :", i+1);
	}
	else {
		printf ( "number not found");
	}
	return 0;
}



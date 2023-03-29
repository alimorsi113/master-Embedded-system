/*
 * ex3.c
 *
 *  Created on: Mar 28, 2023
 *      Author: ali morsi
 */
#include <stdio.h>
int main (){
	int a [10][10], trans[10][10] ,r ,c ,i ,j;
	printf ("Enter row and colum of matrix:");
	fflush (stdout);
	scanf ("%d%d", &r,&c);
	printf ("\nEnter element of matrix:\n");
	for (i=0 ; i<r ;++i)
	for (j=0; j<c; ++j)
	{
			printf ("enter of element a%d%d:",i+1,j+1);
			fflush (stdout);
			scanf ("%d",&a[i][j]);
		}
	printf ("\n Enter  matrix:\n");
	for (i=0 ; i<r ;++i)
	for (j=0; j<c; ++j)
		{
			printf ("%d ",a[i][j]);
			if (j==c-1)
				printf ("\n\n");
		}
	for (i=0 ; i<r ;++i)
		for (j=0; j<c; ++j)
		{
			trans[j][i]=a[i][j];
		}
	printf ("\n trans of matrix:\n");
	for (i=0 ; i<c ;++i)
	for (j=0; j<r; ++j){
			printf("%d ",trans[i][j]);
			if (j==r-1)
			printf ("\n\n");

		}
	return 0;
}




/*
 * ex2.c

 *
 *  Created on: Mar 28, 2023
 *      Author: ali morsi
 */
#include <stdio.h>
int main (){
	int i,n ;
	float num[100], sum=0.0, averag;
	printf ("Enter the number of datd:");
	fflush (stdout);
	scanf ("%d",&n);
	if (n>100||n<0){
		printf ("erorr  number should in range (1 to 100)\n");
		printf ("enter the number again :");
		fflush(stdout);
		scanf ("%d",&n);
	}
	for (i=0; i<n;++i){
		printf ("%d. enter number:",i+1);
		fflush (stdout);
		scanf ("%f",&num[i]);
		sum+=num[i] ;
	}
	averag= sum/n;
	printf (" averg=%0.1f",averag);
	return 0;
}



/*
 * ex2.c

 *
 *  Created on: Mar 29, 2023
 *      Author: Mg Magic
 */
 #include <stdio.h>
int main (){
	char  s[1000] ,i ;
	printf ("Enter a string : ");
		fflush (stdout);
		scanf ("%s",s);
		for ( i=0; s[i]!='\0';++i);
			printf ("lengh of string : %d ",i);
		return (0);
 }

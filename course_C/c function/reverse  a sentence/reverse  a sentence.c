/*
 * reverse  a sentence.c
 *
 *  Created on: May 2, 2023
 *      Author: Mg Magic
 */
/*source code to find reverse a sentence*/
#include <stdio.h>
void sentence (void);
int main(){
	printf ("Enter a sentence :");
	fflush (stdout);
	sentence ();
	return 0;
}
void sentence (void){
	char c;
	scanf ("%c",&c);
	if (c!='\n'){
		sentence ();
		printf ("%c",c);
	}
}


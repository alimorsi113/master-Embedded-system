/*
 * ex9.c

 *
 *  Created on: Mar 18, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
#include <string.h>
int main ()
{
	char c;
	printf ("Enter an alphabet :\n");
	fflush(stdout);
	scanf ("%c" ,&c);
	if
	(c=='a'||c=='A'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u'||c=='E'||c=='e')
	printf ("%c is a vowel\n",c);
	else
	printf ("%c is a consonant\n",c);
	return 0;
}



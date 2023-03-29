/*
 * ex1 .c
 *
 *  Created on: Mar 29, 2023
 *      Author: ali morsi
 */
#include <stdio.h>
int main (){
	char  c[2000] ,ch;
	int i, count=0;
	printf ("Enter astring :");
	fflush (stdout);
	gets (c);
	printf ("Enter acharacter to find frequince : ");
	fflush (stdout);
	scanf ("%c",&ch);
	for ( i=0;c[i]!='\0';++i)
	{
		if (ch==c[i])
			++count;
	}
	printf ("frequence of %c =%d", ch ,count);
	return 0;
}



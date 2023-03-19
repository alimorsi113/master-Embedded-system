/*
 * ex8.c
 *
 *  Created on: Mar 19, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
int main ()
{
	char o;
	float a, b;
	printf ("enrtre opreatpr ethier + or - or* or / :");
	fflush (stdout);
	scanf ("%c" ,&o);
	printf ("entre two operands :");
	fflush (stdout);
	scanf ("%f  %f",&a ,&b);
switch (o)
{
case '+' :
printf ("%f + %f = %.1f" ,a ,b ,a+b);
break;
case '-' :
printf ("%f - %f = %.1f" ,a ,b ,a-b);
break;
case '*' :
printf ("%f * %f = %.1f" ,a ,b ,a*b);
break;
case '/' :
printf ("%f / %f = %.1f" ,a ,b ,a/b);
break;
default:
printf ("erorr operator is not correct");
break;
}
return 0;
}



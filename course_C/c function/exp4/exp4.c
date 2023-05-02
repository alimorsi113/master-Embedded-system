/*
 * exp4.c
 *
 *  Created on: May 2, 2023
 *      Author: Mg Magic
 */
/* source code to calculate power of number*/
#include <stdio.h>
int power (int base, int exp);
int main(){
	int base,exp;
	printf("Enter base number :");
	fflush (stdout);
	scanf("%d",&base);
	printf ("Enter exponent number ( positive number) :");
	fflush (stdout);
	scanf ("%d",&exp);
	printf ("%d^%d = %d" ,base ,exp, power(base, exp));
	return 0;

}
int power (int base , int exp){
	if (exp!=0){
		return  (base * power(base, exp-1));
	} else {
		return 1;
	}
}


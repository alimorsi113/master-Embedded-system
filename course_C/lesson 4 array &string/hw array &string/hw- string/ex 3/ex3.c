/*
 * ex3.c
 *
 *  Created on: Mar 29, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
#include <string.h>
int main (){
	char str[100] ,temp;
	int i, j=0;
	printf ("\n Enter the string :");
	fflush (stdout);
	gets(str);
	i=0;
	j= strlen(str)-1;
	while (i<j){
		temp = str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf ("\n revrence string is :%s ",str);
	return 0;
}



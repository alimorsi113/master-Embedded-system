/*
 * ex4.c
 *
 *  Created on: Mar 28, 2023
 *      Author: Mg Magic
 */
#include <stdio.h>
int main()
{
    int arr[30] , element ,num ,i,location;
    printf ("\n number of element :");
    fflush (stdout);
    scanf ("%d",&num);
    for (i=0; i<num;i++){
    scanf ("%d",&arr[i]);
    }
     printf ("\n Enter the element to be inserted:");
    fflush (stdout);
    scanf ("%d",&element);
    printf ("\n Enter the location:");
    fflush (stdout);
    scanf ("%d",&location);
    for (i=num ; i>=location; i--) {
    	arr[i] = arr [i - 1];
    }
    num++;
    arr[location - 1] = element;
    for (i = 0; i<num;i++)
        printf ("%d ",arr[i]);
    return (0);
}





/*
 * ex1 .c
 *
 *  Created on: Mar 29, 2023
 *      Author: ali morsi
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c", &s);

    printf("Hello, World!\n");
    printf("Welcome to C programming.");
    char input[100];
    scanf("%[^\n]", input);
    printf("%s", input);
    return 0;
}


/*
 * reverse sentence string.c
 *
 *  Created on: May 2, 2023
 *      Author: Mg Magic
 */
/*source code to find reverse a sentence with string*/
#include <stdio.h>

int main() {
	int i;
    char sentence[100];
    printf("Enter a sentence: ");
    fflush (stdout);
    fgets(sentence, 100 ,stdin);

    int len = 0;
    while(sentence[len] != '\0' && sentence[len] != '\n') {
        len++;
    }

    for( i = len-1; i >= 0; i--) {
        if(sentence[i] == '\n') {
            continue;
        }
        printf("%c", sentence[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - outputs a sentence prior to the main
 * function is completed
 */
void first(void)
{
	printf("You're exhausted! and yet, you must admit\n");
	printf("I carried my home on my back!\n");
}

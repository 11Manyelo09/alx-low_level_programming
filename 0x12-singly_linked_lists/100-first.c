#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - outputs a sentence prior to the main
 * function is completed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back\n");
	printf("I carried my home on my back!\n");
}

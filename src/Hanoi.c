/*
 ============================================================================
 Name        : Hanoi.c
 Author      : doremi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char start, char aid, char end)
{
	static int i = 0;
	if(n == 1)
	{
		++i;
		printf("%d Move sheet from %c to %c\n", i, start, end);
	}
	else
	{
		hanoi(n-1, start, end, aid);
		hanoi(1, start, aid, end);
		hanoi(n-1, aid, start, end);
	}

}


int main(void) {
//	puts("!!!Hello Doremi!!!"); /* prints !!!Hello Doremi!!! */
	int n;
	printf("please input: ");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');
	printf("\n");

	return 0;
}

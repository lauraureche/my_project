/*
 * Author: Laura Ureche
 * Aplicatie masoara durata de executie a unei verificari
 */
#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t t_start, t_stop;
	float seconds;
	int i;

	t_start = clock();

	for (i=0; i<=20; i++)
	{
		if (i%4 == 0)
			printf("%d", i);
	}

	t_stop = clock();

	seconds = ((float)(t_stop - t_start)) / CLOCKS_PER_SEC;
	printf("Timp de executie: %.3f sec.\n", seconds);

	return 0;
}

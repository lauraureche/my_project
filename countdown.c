/*
 * Author: Laura Ureche
 * Un program care numără descrescător de la 3→1, și după afișați START (cu interval de 1 secundă între fiecare număr).
 */
#include <stdio.h>
#include <time.h>

void wait(int seconds)
{
	clock_t endtime;
	int i = 3;

	endtime = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endtime){}
	printf("%d seconds\n", i-seconds);
}

int main(void)
{
	int i;
	for (i =0; i<3; i++)
	{
		wait(i);
	}
	printf("START\n");
	return 0;
}

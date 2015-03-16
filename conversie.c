/*
 * Author: Laura Ureche
 * Scrieţi un program care să convertească numere din baza 2 în baza 10 şi invers. Numerele se introduc
 * de la tastatură până la intâlnirea unui număr negativ. Pentru fiecare număr introdus, se va afişa pe o linie rezultatul.
 */
#include<stdio.h>
#include<string.h>
int main()
{
	int i, l, s, j;
	printf("Introduceti numre intregi si pozitive, terminare: numar negativ\n");
	while (i >= 0)
	{
		scanf("%d", &i);
		l = len(i);
		s = 0;
		j = 1;
		for (i=0; i<l;i++)
		{
			s += i%j;
			j *=10;
		}
		printf("%d", s);
	}

	printf("End");
	return 0;
}

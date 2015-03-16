/*
 * Author: Laura Ureche
 *  De la tastatură se introduc mai multe numere întregi si pozitive, terminate printr-un număr negativ.
 *  După fiecare număr introdus, se va afişa lista divizorilor lui nebanali sau textul PRIM.
 *  La sfârşit se va afişa numărul de numere prime găsite.
 */
#include<stdio.h>
int main(){
	int i = 0, j, divizor, no, total=0;
	printf("Introduceti numere intregi si pozitive, terminare: numar negativ\n");
	while (i >= 0)
	{
		scanf("%d", &i);
		no = 0;
		for (j=2;j<i;j++)
		{
			divizor = i%j;
			if (divizor == 0)
			{
				printf("%d ", j);
				no += 1;
			}
		}

		if (no == 0 && i > 0)
		{
			printf("PRIM");
			total += 1;
		}
		printf("\n");
	}

	printf("Au fost in total: %d numere prime", total);
	return 0;
}

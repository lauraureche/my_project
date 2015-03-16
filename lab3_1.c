/*
 * Author: Laura Ureche
 *  Se citeşte de la tastatură un număr întreg si pozitiv N. Să se scrie un program care determină
 *  care număr cuprins intre 2 si N are suma divizorilor nebanali maximă (adică printre divizori nu
 *  sunt considerate numerele 1 si N). Dacă există mai multe asemenea numere se va afişa numai primul dintre ele.
 */
#include<stdio.h>
int main(){
	int n, max, suma, i, j, no, divizor;

	printf("introduceti numarul: \n");
	scanf("%d", &n);

	max = 0;
	no = 0;
	for (i=2;i<n;i++)
	{
		suma = 0;
		for (j=2;j<i;j++)
		{
			divizor = i%j;
			if (divizor == 0)
				suma +=j;
		}

		if (max < suma)
		{
			max = suma;
			no = i;
		}
	}
	printf("OUT: %d", no);
	return 0;
}

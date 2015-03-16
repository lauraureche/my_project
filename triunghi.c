/*
 * Author: Laura Ureche
 * Fiind date 3 numere naturale, citite de la tastatură, să se verifice dacă ele reprezintă laturile unui triunghi,
 * în cazul în care acestea pot forma un triunghi se va afișa mesajul “DA”, în caz contrar “NU”.
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a,b,c;
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);

	if ((a < b + c) && (b < a + c) && (c < b +a ))
		printf("DA\n");
	else
		printf("NU\n");

	return 0;
}

/*
 * Author: Laura Ureche
 * Să se determine minimul și maximul a două numere folosind funcția matematică fabs. Afișați rezultatul cu două zecimale.
 */
#include<stdio.h>
#include<math.h>
int main(void){
	float number_1, number_2, min, max;
	printf("Afisati primul numar: ");
	scanf("%f", &number_1);
	printf("Afisati cel de-al doilea numar: ");
	scanf("%f", &number_2);
	if (fabs(number_1) > fabs(number_2))
	{
		min = fabs(number_2);
		max = fabs(number_1);
	}
	else
	{
		max = fabs(number_1);
		min = fabs(number_2);
	}
	printf("min: %4.2f, max: %4.2f\n", min, max);
	return 0;
}

/*
 * Author: Laura Ureche
 *  Să se calculeze (folosind formule matematice; nu instrucțiuni repetitive) și să se afișeze sumele.
 */
#include<stdio.h>
int main(void){
	int n, suma1=0, suma2=0;
	printf("Afisati numarul n: ");
	scanf("%d", &n);
	suma1 = n*(n+1)/2;
	suma2 = n*(n+1)*(2*n+1)/6;
	printf("Suma numerelor consecutive %d\n", suma1);
	printf("Suma patratelor numerelor consecutive %d\n", suma2);
	return 0;
}

/*
 * Author: Laura Ureche
 * Se citește de la tastatură un număr natural în baza 10. Să se afișeze în bazele 8, 10 și 16.
 */
#include<stdio.h>
int main(void){
	int numar;
	scanf("%d", &numar);
	printf("In baza 8: %o\n", numar);
	printf("In baza 10: %d\n", numar);
	printf("In baza 16: %X\n", numar);
	return 0;
}

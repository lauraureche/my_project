/*
 * Author: Laura Ureche
 * Scrieți un program care calculează 5 valori aleatoare și le afișează pe ecran, folosind ca seed ceasul sistemului,
 * ca mai sus. Executați de mai multe ori programul. Inlocuiți apoi seed-ul cu o valoare constantă (0x1234 de exemplu)
 *  si rulați din nou programul de câteva ori la rând. Ce observaţi? Care e explicaţia?
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	int a,b,c,d,e;

	// srand((unsigned)time(NULL));
	srand(0x1234);
	a = rand();
	b = rand();
	c = rand();
	d = rand();
	e = rand();

	printf("Valorile aleatoare generate: %d, %d, %d, %d, %d\n", a, b, c, d, e);
	return 0;
}

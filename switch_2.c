/*
 * Author: Laura Ureche
 * Switch example
 */
#include<stdio.h>
int main() {
  int n, n2;
  printf("Introduceţi o valoare între 0 şi 5:");
  scanf("%d", &n);
  n2 = 1;
  switch (n) {
    case 5:
    	n2 *= 2;
        /* fără break, continuă la următoarea instrucţiune */
    case 4:
    	n2 *= 2;
    case 3:
    	n2 *= 2;
    case 2:
    	n2 *= 2;
    case 1:
    	n2 *= 2;
    case 0:
    	printf("2 la puterea %d este %d\n", n, n2);
    	break;

    default:
    	printf( "Valoare invalidă\n" );
  }
  return 0;
}
